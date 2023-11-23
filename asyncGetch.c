/*  Fait avec :
        - https://www.geeksforgeeks.org/multithreading-in-c/
        - https://stackoverflow.com/a/63461075
*/

#include <stdio.h>
#include <conio.h>      // pour getch
#include <unistd.h>     // pour sleep (pas obligatoire)
#include <pthread.h>    // pour les threads

/* definit une structure contenant 2 valeurs :
    - le caractère entré
    - un int utilisé comme bool qui controle le thread
*/
typedef struct keyPressedStruct{
    char key;
    int shouldStop;
} kpStruct;

/* la fonction du thread, qui récupère la dernière touche utilisé
   et mets à jours le champ 'key' du struct passé en param
*/
void *updateKeyPressed(void *args){
    // transforme le void* en kpStruct
    kpStruct *arguments = (kpStruct *)args;

    // boucle tant que shouldStop est faux
    while (!arguments->shouldStop){
        
        // récupère le dernier char
        arguments->key = getch();

        // pour éviter une boucle infinie, le thread est fini si q est enfoncé
        // ce test n'est pas obligatoire
        if (arguments->key == 'q') {
            arguments->shouldStop = 1;
        }
    }
    
    return NULL;
}

int main() {
    // Init une kpStruct 'vide'    
    kpStruct kps = {'\0', 0};
    char oldKey = '\0' ;

    // Lance le thread
    pthread_t thread_id; 
    pthread_create(&thread_id, NULL, updateKeyPressed, (void *)&kps); 
    
    // Le code s'exécute en même temps que le thread (boucle pour l'exemple)
    // les champs shoudlStop et key de kps sont accessible dans le main
    while (!kps.shouldStop){
        // utile pour que la touche ne soit compté qu'une fois
        if (kps.key == oldKey) kps.key = '\0';
        sleep(1); // pour éviter que la console soit illisible
        printf("key is : %c\n", kps.key);
        oldKey = kps.key;
    }

    return 0;
}
