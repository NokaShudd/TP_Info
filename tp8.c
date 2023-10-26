#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/*======================== EXO 1 ========================*/

int* createTable(int* size){
    printf("Entre la taille: ");
    scanf("%d", size);

    int* table = (int*) calloc(*size, sizeof(int));

    return table;
}

int exo1(){
    int size = 0;
    int* table = createTable(&size);

    for (int i = 0; i < size; i++){
        printf("%d - ", table[i]);
    }

    printf("%d", size);
    
}

/*======================== EXO 2 ========================*/


void exo2(){
    int size = 0;
    printf("Nombre de notes : ");
    scanf("%d", &size);

    int *table = (int*) calloc(size, sizeof(int));

    for (int i = 0; i < size; i++){
        printf("Quelle est la valeur de la note %d ?\n", i+1);
        scanf("%d", &table[i]);
    }
    
    for (int i = 0; i < size; i++){
        printf("%d - ", table[i]);
    }

    float moy = 0;

    for (int i = 0; i < size; i++){
        moy += table[i];
    }
    moy /= size;
    printf("Moyenne est : %f", moy);
}

void betterExo2(){
    int size = 0;
    int moy = 0;
    int value = 0;

    while (1){
        printf("Entre la note : (<0 = fini) - ");
        scanf("%d", &value);
        if (value < 0) break; 
        moy += value;
        size++;
    }

    printf("Moyenne est %f",(float)moy/size);
}

/*======================== EXO 2 ========================*/

int getRandomInteger(){
    return rand() % 255; 
}

void showRow(int *row, int size){
    for (int i = 0; i < size; i++){
        printf(" %d ", row[i]);
    }
    
}

void show(int** table){
    int height = sizeof(table[0]) / sizeof(table[0][0]);
    int width = sizeof(table) / height;
    printf("height : %d; width: %d\n", height, width);
    for (int i = 0; i < height; i++){
        printf("-------------------------\n");
        showRow(table[i], width);
        printf("\n");
    }
    
}

void exo3(){
    int height, width = 0;
    printf("Entre la hauteur et la profondeur du tableau :\n");
    scanf("%d %d", &height, &width);

    int** table = (int**) malloc(height * sizeof(int));

    for (int i = 0; i < height; i++) {
        table[i] = (int*) malloc(width * sizeof(int));
        for (int j = 0; j < width; j++){
            table[i][j] = getRandomInteger(); 
        }
    }

    show(table);


}

int main(){
    srand(time(NULL));
    // exo1();         // DONE
    // exo2()          // DONE
    // betterExo2();   // DONE
    exo3();
    return 0;
}