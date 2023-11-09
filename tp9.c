#include <stdio.h>
#include <stdlib.h>


typedef struct StudentsNote{
    float math, physics, info;
} Student;



void initStaticStudent(Student students[5]){
    

    for (int i = 0; i < 5; i++){
        float m, p, info;
        printf("Pour l'élève %d :\nEntre sa note de math :", i+1);
        scanf("%f", &m);
        printf("Entre sa note d'info :");
        scanf(" %f", &info);
        printf("Entre sa note de physique :");
        scanf(" %f", &p);
        Student std = {m, p, info};
        students[i] = std;
    }


}


int writeBin(char* path, Student students[5]){
    FILE* pf = fopen(path, "w");

    if (pf == NULL) {
        printf("Couldn't open file");
        return 0;
    }

    const int size = 15;

    float numbers[15];

    for (int i = 0; i < 5; i++){
        numbers[i*3] = students[i].math;
        numbers[i*3+1] = students[i].info;
        numbers[i*3+2] = students[i].physics;
    }
    
    fwrite(&size, sizeof(int), 1, pf);

    if (fwrite(numbers, sizeof(float), size, pf) != size) {
        printf("Couldn't write in file\n");
        return 0;
    }

    fclose(pf);

    return 1;
}


int writeTxt(char* path, Student students[5]){
    FILE* pf = fopen(path, "w");
    
    if (pf == NULL) {
        printf("Couldn't open file");
        return 0;
    }
    
    for (int i = 0; i < 5; i++){
        fprintf(pf, "%f %f %f\n", students[i].math, students[i].info, students[i].physics);
    }

    fclose(pf);

    return 1;
}




void writeFiles(Student students[5]){
    char word[50], word2[50];
    printf("Entre le nom du fichier binaire \n");
    scanf(" %[^\n]", word);
    printf("Entre le nom du fichier texte \n");
    scanf(" %[^\n]", word2);

    writeBin(word, students);
    writeTxt(word2, students);
}

int readBin(char* path, float** notes){
    FILE* pf = fopen(path, "r");
    
    if (pf == NULL) {
        printf("Couldn't open file.\n");
        return 0;
    }

    int size;

    fread(&size, sizeof(int), 1, pf);


    *notes = (float*) calloc(size, sizeof(float));

    if (fread(*notes, sizeof(float), size, pf) != size) {
        printf("Couln't read file.\n");
        return 0;
    }
    
    fclose(pf);

    return 1;
}


int main(){
    int test = 0;
    printf("Faut-il entrer les valeurs ? (1: oui) \n");
    scanf("%d", &test);

    if (test == 1){
        Student students[5];
        initStaticStudent(students);

        writeFiles(students);
    }

    float* notes;

    char path[50];
    printf("Entre le nom du fichier binaire \n");
    scanf(" %[^\n]", path);

    int worked = readBin(path, &notes);


    printf("math = %f \n", notes[0]);

    if (worked){
        for (int i = 0; i < 5; i++){
            printf(
                "Eleve %d : \n  -  math = %f\n  -  info = %f\n  -  physique = %f\n", 
                i+1, notes[i*3], notes[i*3+1] , notes[i*3+2]
            );
        }
    } else {
        printf("Erreur, vérifie que le chemin que tu as donné corresponds au fichier binaire généré.");
    }

    free(notes);

    return 0;
}