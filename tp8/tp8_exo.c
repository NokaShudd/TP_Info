#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "tp8_exo.h"

/*======================== EXO 1 ========================*/

int* createTable(int* size){
    printf("Entre la taille: ");
    scanf("%d", size);

    int* table = (int*) calloc(*size, sizeof(int));

    return table;
}

void TP8exo1(){
    int size = 0;
    int* table = createTable(&size);

    for (int i = 0; i < size; i++){
        printf("%d - ", table[i]);
    }

    printf("%d", size);
    
}

/*======================== EXO 2 ========================*/


void TP8exo2(){
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

    free(table);
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

/*======================== EXO 3 ========================*/

int getRandomInteger(){
    return rand() % 255; 
}

void showRow(int* row, int size, int index){
    for (int i = 0; i < size; i++){
        printf("%d-%d : %d \n",index, i, row[i]);
    }    
}

void show(int** table, int width, int height){    

    for (int i = 0; i < height; i++){
        printf("-------------------------------------------\n");
        showRow(table[i], width, i);
        printf("\n");
    }
}

int* flatTable(int** table, int width, int height){
    int* table1d = (int*) malloc(height*width * sizeof(int));

    for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            table1d[i*width + j] = table[i][j];
        }
    }

    return table1d;
}


void bubbleSort(int* table, int length){
    for (int i = 0; i < length; i++){
        for (int j = i+1; j < length; j++){
            if (table[i] > table[j]) {
                table[i] += table[j];
                table[j] = table[i] - table[j];
                table[i] -= table[j];
            }
        }
        
    }

    
}

void TP8exo3(){
    int height, width = 0;
    printf("Entre la hauteur et la profondeur du tableau :\n");
    scanf("%d %d", &height, &width);

    int** table = (int**) calloc(height, sizeof(int*));

    for (int i = 0; i < height; i++) {
        table[i] = (int*) calloc(width, sizeof(int));
        for (int j = 0; j < width; j++){
            table[i][j] = getRandomInteger(); 
            printf("%d-%d : %d\n", i, j, table[i][j]);
        }
    }

    show(table, width, height);

    int* tableSorted = flatTable(table, width, height);

    bubbleSort(tableSorted, width*height);

    showRow(tableSorted, width*height, 0);

    free(tableSorted);

    for (int i = 0; i < height; i++){
        free(table[i]);
    }
    free(table);

}

/*======================== EXO 4 ========================*/

char* readWord(){
    char* word = (char*) calloc(50, sizeof(char));
    printf("Entre le mot: ");
    scanf(" %[^\n]", word);

    return word;
}

void read10Words(char** tableWords){

    for (int i = 0; i < 10; i++){
        tableWords[i] = (char*) calloc(50, sizeof(char));
        tableWords[i] = readWord();        
        int realSize = 0;
        for (char l = 0; l < 50; l++){
            if (l == '\n') break;
            realSize++;
        }
        tableWords[i] = realloc(tableWords[i], realSize * sizeof(char));

    }
}

void showWord(char** tableWords){
    for (int i = 0; i < 10; i++){
        printf(tableWords[i]);
        printf("\n");
    }
    
}

void TP8exo4(){
    char** tableWords = (char**) calloc(10, sizeof(char*));
    read10Words(tableWords);

    showWord(tableWords);


}
