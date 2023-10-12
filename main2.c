#include <stdio.h>

int getMax(int a, int b){
    return a > b ? a : b;
}

int saisirEntier(){
    int n = 0;

    printf("Entre un entier \n");
    scanf("%d", n);

    return n;
}

int calculAire(int largeur, int longueur){
    return largeur * longueur;
}


int calculPerim(int value, int longueur){
    return 2*value+2*longueur;
}

int exo2(){
    int largeur = saisirEntier();
    int longueur = saisirEntier();

    printf("Les périm : %d, l'aire : %d", calculPerim(largeur, longueur), calculAire(largeur, longueur));
}

int estMultiple(int valuea, int valueb){
    return valuea%valueb == 0;
}

int exo3(){
    int entier = saisirEntier();

    printf(estMultiple(entier, 3) ? "il est multiple de 3" : "Il est pas mutiple de 3");
}

int exo1(){
    int numb1, numb2;

    printf("Entre le premier nombre :\n");
    scanf("%d", &numb1);
    
    printf("Entre le deuxieme nombre :\n");
    scanf(" %d", &numb2);

    printf("le plus grand est %d", getMax(numb1, numb2));

}

int main(){
    exo1();
    return 0;
}
