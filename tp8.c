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

void show(int** table, int width, int height){    

    for (int i = 0; i < height; i++){
        printf("-------------------------------------------\n");
        showRow(table[i], width);
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

void exo3(){
    int height, width = 0;
    printf("Entre la hauteur et la profondeur du tableau :\n");
    scanf("%d %d", &height, &width);

    printf("w: %d, h: %d\n", height, width);

    int** table = (int**) malloc(height * sizeof(int));

    for (int i = 0; i < height; i++) {
        table[i] = (int*) malloc(width * sizeof(int));
        for (int j = 0; j < width; j++){
            table[i][j] = getRandomInteger(); 
            printf("%d-%d : %d\n", i, j, table[i][j]);
        }
    }

    show(table, width, height);

    int* tableSorted = flatTable(table, width, height);

    bubbleSort(tableSorted, width*height);

    showRow(tableSorted, width*height);

}

int main(){
    srand(time(NULL));
    // exo1();         // DONE
    // exo2()          // DONE
    // betterExo2();   // DONE
    exo3();
    return 0;
}