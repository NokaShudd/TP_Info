#include <stdio.h>
#define true 1
#define false 0



#pragma region Exercices TP3

void exe1(){
    int numb1, numb2;

    printf("Entre le premier nombre :\n");
    scanf("%d", &numb1);
    
    printf("Entre le deuxieme nombre :\n");
    scanf(" %d", &numb2);

    printf("Le nombre le plus grand est : %d", numb1 > numb2 ? numb1 : numb2);

}

void exe2(){
    int width, height;

    printf("Entre la largeur :\n");
    scanf("%d", &width);
    
    printf("Entre la longueur :\n");
    scanf(" %d", &height);

    printf("L'aire est : %d, et le périmètre : %d", width*height, 2*width+2*height);

}


void exe3(){
    const int THREE = 3;
    int value;

    printf("Entre la valeur :\n");
    scanf("%d", &value);

    if (value % THREE == 0) printf("%d est un multiple de %d", value, THREE);
    if (value >= 10) printf("%d est supérieur ou égal à 10", value);
    
}

void exe4(){
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


void exe5(){
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

int addValue(){
    int value = 0;

    

    return value;
}

void exe6(){



}


#pragma endregion


int main(){
    exe4();

    return 0;
}
