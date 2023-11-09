#include "tp9_exo.h"

int main(){
    int test = 0;
    printf("Faut-il entrer les valeurs ? (1: oui) \n");
    scanf("%d", &test);

    if (test == 1){
        Student students[5];
        initStaticStudent(students);

        writeFiles(students);
    }

    float* notes;

    char path[50];
    printf("Entre le nom du fichier binaire \n");
    scanf(" %[^\n]", path);

    int worked = readBin(path, &notes);


    printf("math = %f \n", notes[0]);

    if (worked){
        for (int i = 0; i < 5; i++){
            printf(
                "Eleve %d : \n  -  math = %f\n  -  info = %f\n  -  physique = %f\n", 
                i+1, notes[i*3], notes[i*3+1] , notes[i*3+2]
            );
        }
    } else {
        printf("Erreur, vérifie que le chemin que tu as donné corresponds au fichier binaire généré.");
    }

    free(notes);

    return 0;
}