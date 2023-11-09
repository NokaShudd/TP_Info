#include <stdio.h>
#include "tp4_exo.h"

/*======================== EXO 1 ========================*/

int getMax(int valueA, int valueB){
    return valueA > valueB ? valueA : valueB;
}

void exo1(){
    int numb1, numb2;

    printf("Entre le premier nombre :\n");
    scanf("%d", &numb1);
    
    printf("Entre le deuxieme nombre :\n");
    scanf(" %d", &numb2);

    printf("Le plus grand est %d", getMax(numb1, numb2));
}

/*======================== EXO 2 ========================*/

int saisirEntier(){
    int n = 0;

    printf("Entre un entier \n");
    scanf("%d", &n);

    return n;
}

int calculAire  (int largeur, int longueur) { return largeur * longueur; }
int calculPerim (int largeur, int longueur) { return 2*largeur+2*longueur; }

void exo2(){
    int largeur = saisirEntier();
    int longueur = saisirEntier();

    printf(
        "La valeur du périmètre est : %d, et celle de l'aire : %d",
        calculPerim(largeur, longueur), calculAire(largeur, longueur)
    );
}

/*======================== EXO 3 ========================*/

int estMultiple (int valueA, int valueB) { return ((valueA % valueB) == 0); }

void exo3(){
    int entier = saisirEntier();

    printf(
        estMultiple(entier, 3) ? 
            "%d est multiple de 3" : 
            "%d n'est pas mutiple de 3",
        entier
    );
}
