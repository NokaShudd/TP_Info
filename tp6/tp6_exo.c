#include <stdio.h>
#include "tp6_exo.h"

/*======================== EXO 1 ========================*/

void setToZero(int* entier, float* real){
    *entier = 0;
    *real = 0;
}

void exo1(){
    int entier;
    float real;

    printf("Entier : %d, reel : %d\n", entier, real);

    setToZero(&entier, &real);
    
    printf("Entier : %d, reel : %d\n", entier, real);
}

/*======================== EXO 2 ========================*/

void procDivide(int number1, int number2, int* quotient, int* reste){
    *reste = number1 % number2;
    *quotient = number1 / number2;
}

int funcDivide(int number1, int number2, int* quotient){
    *quotient = number1 / number2;
    return number1 % number2;
}

void exo2(){
    //  Pour a = 24 b = 6
    int quotient, reste;
    
    procDivide(28, 6, &quotient, &reste);
    printf("Avec procedure : quotient = %d, reste = %d\n", quotient, reste);

    quotient = 0;

    reste = funcDivide(28, 6, &quotient);
    printf("Avec procedure : quotient = %d, reste = %d\n", quotient, reste);
}

/*======================== EXO 3 ========================*/

void swap(int* number1, int* number2){
    *number1 = *number1 + *number2;
    *number2 = *number1 - *number2;
    *number1 = *number1 - *number2;
}

void exo3(){
    int a = 20, b = 25;
    printf("a : %d, b : %d\n", a, b);
    swap(&a, &b);
    printf("a : %d, b : %d\n", a, b);
}

/*======================== EXO 4 ========================*/

void calculSumProduct(int table[], int length, int* sum, long* product){
    for (int i = 0; i < length; i++){
        *sum += table[i];
        *product *= table[i];
    }
}

void exo4(){
    int tableLength = 0;
    printf("Quelle est la longueur du tableau ?\n");
    scanf("%d", &tableLength);

    int table[tableLength];
    
    for (int i = 0; i < tableLength; i++){
        int input = 0;
        printf("Entre la valeur de la position %d\n", i);
        scanf(" %d", &input);
        table[i] = input;
    }

    int sum = 0;
    long product = 1;
    calculSumProduct(table, tableLength, &sum, &product);
    printf("Somme : %d, Produit : %d", sum, product); 
}

/*======================== EXO 5 ========================*/

typedef struct PointStruct{
    float x, y;
} Point;


void swapPoint(Point *pointA, Point *pointB){
    Point pointA2 = *pointA;

    *pointA = *pointB;
    *pointB = pointA2;

}

void showPoint(Point point){
    printf("X : %f, Y: %f\n", point.x, point.y);
}

void exo5(){
    Point pointA = {5.4f, 8.6f};
    Point pointB = {78.7f, 7.6f};

    showPoint(pointA);
    showPoint(pointB);

    swapPoint(&pointA, &pointB);

    showPoint(pointA);
    showPoint(pointB);
}