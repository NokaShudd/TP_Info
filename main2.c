#include <stdio.h>

int getMax(int a, int b){
    return a > b ? a : b;
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
