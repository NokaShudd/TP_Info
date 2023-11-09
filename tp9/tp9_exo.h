#ifndef HEADER_FILE_NAME
#define HEADER_FILE_NAME

typedef struct StudentsNote{
    float math, physics, info;
} Student;

void        initStaticStudent       (   Student students[5]                     );
int         writeBin                (   char* path, Student students[5]         );
int         writeTxt                (   char* path, Student students[5]         );
void        writeFiles              (   Student students[5]                     );
int         readBin                 (   char* path, float** notes               );


#endif

#include <stdio.h>
#include <stdlib.h>
