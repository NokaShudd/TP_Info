#include "tp5_exo.h"
#include <stdio.h>

/*======================== EXO 1 ========================*/


nombreRationnel add(nombreRationnel number1, nombreRationnel number2){
    nombreRationnel newNumber = number1;
    newNumber.numerateur *= number2.denominateur;
    newNumber.numerateur += number2.numerateur * number1.denominateur;
    newNumber.denominateur *= number2.denominateur;
    return newNumber;
}

nombreRationnel multiply(nombreRationnel number1, nombreRationnel number2){
    nombreRationnel newNumber = number1;
    newNumber.numerateur *= number2.numerateur;
    newNumber.denominateur *= number2.denominateur;
    return newNumber;
}

void showNumber(nombreRationnel number){
    printf("%d/%d\n", number.numerateur, number.denominateur);
}

nombreRationnel newNumber(){
    nombreRationnel newNumber = {0, 0};
    
    printf("Entre le numerateur du nombre :\n");
    scanf("%d", &newNumber.numerateur);

    printf("Entre le denominateur du nombre :\n");
    scanf("%d", &newNumber.denominateur);

    return newNumber;
}

void exo1(){
    nombreRationnel number1 = newNumber();
    nombreRationnel number2 = newNumber();

    printf("On à : ");
    showNumber(number1);
    printf("et : ");
    showNumber(number2);

    printf("On les additionne, on a donc : ");
    showNumber(add(number1, number2));

    printf("On les multiplie, on a donc : ");
    showNumber(multiply(number1, number2));
}

/*======================== EXO 2 ========================*/

int getMax(int entiers[], int nombre){
    int max = entiers[0];

    for (int i = 1; i < nombre; i++){
        if (entiers[i] > max) max = entiers[i];
    }

    return max;
}

void exo2(){
    int entiers[100];
    int nombre = 0;

    printf("Combien y a t'il de nombres : ");
    scanf("%d", &nombre);

    for (int i = 0; i < nombre; i++){
        printf("Entre le valeur : ");
        scanf("%d", &entiers[i]);
    }
   
    printf("Le maximum est : %d", getMax(entiers, nombre));
}

/*======================== EXO 3 ========================*/

void exo3(){
    int table2D[3][4];
    int table1D[12];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            printf("Entre la valeur a la ligne %d, et la colonne %d : ", j+1, i+1);
            scanf("%d", &table2D[i][j]);
        }
    }
    
    for (int i = 0; i < 12; i++){
        table1D[i] = table2D[i/4][i%4];
        printf("%d \n", table1D[i]);
    }
}
