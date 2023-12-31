#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "tp7_exo.h"

/*======================== EXO 1 ========================*/

int numberOf(char* string, char letter){
    int number = 0;
    for (int i = 0; string[i] != '\0'; i++){
        if (letter == string[i]) number++;
    }
    return number;
}

void TP7exo1(){
    char string[25] = "Test de chaine";
    int numberE = numberOf(string, 'e');
    printf("Il y a %d e\n", numberE);
}

/*======================== EXO 2 ========================*/

int getRandomInteger7(int min, int max){
    // Inverse min et max si les bornes sont mal données
    if (min > max) {
        max += min;
        min = max-min;
        max = max-min;
    }

    return rand() % (max-min) + min; 
}

int testRandomInteger(){
    int value = 0;
    for (int i = 0; i < 100; i++){
        value = getRandomInteger7(1, 10);
        if (value < 1 || value > 10) return 0;
    }
    return 1;
}

void TP7exo2(){
    printf(testRandomInteger() ? "Ca marche" : "Marche pas");
}

/*======================== EXO 3 ========================*/


void TP7exo3(){
    int max, min;
    printf("Entre la valeur minimale : ");
    scanf("%d", &min);
    printf("Entre la valeur maximale : ");
    scanf(" %d", &max);

    int goal = getRandomInteger7(min, max);
    int guess;
    
    printf("Entre une valeur : ");
    scanf(" %d", &guess);

    while (guess != goal){
        printf( guess > goal ? "La valeur est inferieure\n": "La valeur est supérieure\n");

        
        printf("Entre une nouvelle valeur : ");
        scanf(" %d", &guess);
    }

    printf("Le nombre etait bien %d !", goal);
}
