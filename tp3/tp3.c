#include <stdio.h>
#include "tp3.h"
#define true    1
#define false   0


#pragma region Exercices


/*======================== EXO 1 ========================*/

void TP3exo1(){
    int numb1, numb2;

    printf("Entre le premier nombre :\n");
    scanf("%d", &numb1);
    
    printf("Entre le deuxieme nombre :\n");
    scanf(" %d", &numb2);

    printf("Le nombre le plus grand est : %d", numb1 > numb2 ? numb1 : numb2);
}

/*======================== EXO 2 ========================*/

void TP3exo2(){
    int width, height;

    printf("Entre la largeur :\n");
    scanf("%d", &width);
    
    printf("Entre la longueur :\n");
    scanf(" %d", &height);

    printf("L'aire est : %d, et le périmètre : %d", width*height, 2*width+2*height);
}

/*======================== EXO 3 ========================*/

void TP3exo3(){
    const int THREE = 3;
    int value;

    printf("Entre la valeur :\n");
    scanf("%d", &value);

    if (value % THREE == 0) printf("%d est un multiple de %d", value, THREE);
    if (value >= 10) printf("%d est supérieur ou égal à 10", value);
}

/*======================== EXO 4 ========================*/

void TP3exo4(){
    int age;
    char chara;
    int etudiant = false;

    printf("Entre l'age :\n");
    scanf("%d", &age);
    
    printf("Etes-vous étudiant (o : oui, non par défaut) :\n");
    scanf(" %c", &chara);

    if (chara == 'o') etudiant = true;

    if (age < 12){
        printf("4 euro");
        return;
    }
    if (age < 17 || (age < 27 && etudiant) || age > 65){
        printf("6 euro");
        return;
    }
    printf("9 euro");
}

/*======================== EXO 5 ========================*/

void TP3exo5(){
    int number;
    
    printf("Entrer le numéro :\n");
    scanf("%d", &number);

    switch (number){
        case 1:
            printf("Boisson froide 1");
            break;
        case 2:
            printf("Boisson froide 2");
            break;
        case 3:
            printf("Boisson froide 3");
            break;
        case 10:
            printf("Boisson chaude 1");
            break;
        case 11:
            printf("Boisson chaude 2");
            break;
        
        default:
            printf("Ce numéro n'est pas attribué");
            break;
    }
}

/*======================== EXO 6 ========================*/

float getValue(){
    float value = 0.f;

    do{
        printf("Nouvelle note\n");
        scanf("%f", &value);
    } while (value < 0 || value > 20);

    return value;
}

void TP3exo6(){
    float value1 = getValue();
    float value2 = getValue();
    float value3 = getValue();

    printf("La moyenne est %f", (value1 + value2 + value3)/(float)3);
}

/*======================== EXO 7 ========================*/

void TP3exo7(){
    int classes = 0;
    int students = 0;
    int classeStudents;

    printf("Entrer le nombre classe :\n");
    scanf("%d", &classes);

    for (int _ = 0; _++ < classes; ){
        classeStudents = 0;
        printf("Entrer le nombre d'élève dans la classe :\n");
        scanf(" %d", &classeStudents);
        students += classeStudents;
    }

    printf("Il y a %d élèves.", students);
}

/*======================== EXO 8 ========================*/

void TP3exo8(){
    int number = 0;

    do{
        printf("Entrer le nombre :\n");
        scanf("%d", &number);
    } while (number % 7 != 0 || number % 2 != 0);
}

/*======================== EXO 9 ========================*/

void TP3exo9(){
    int floor = 0;
    int blocs;
    int i = 1;

    printf("Entrer le nombre de pierres :\n");
    scanf("%d", &blocs);
    
    while (blocs >= i*i){
        blocs -= i*i;
        floor++;
        i++;
    }
    
    printf("Les nombres d'étages est %d", floor);
}

/*======================= EXO 10 =======================*/

void TP3exo10(){
    float numbers = 0;
    float total = 0; 
    float temp = 0;
    
    printf("Entrer une valeur ( < 0 = stop )\n");
    scanf("%f", &temp);

    while(temp >= 0){
        numbers++;
        total += temp;
        printf("Entrer une valeur ( < 0 = stop )\n");
        scanf(" %f", &temp);
    };

    printf("La moyenne est :%f", (total / numbers));
}


#pragma endregion

