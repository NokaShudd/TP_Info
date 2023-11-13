#ifndef TP9HEADER
#define TP9HEADER

typedef struct StudentsNote{
    float math, physics, info;
} Student;

void        initStaticStudent       (   Student students[5]                     );
int         writeBin                (   char* path, Student students[5]         );
int         writeTxt                (   char* path, Student students[5]         );
void        writeFiles              (   Student students[5]                     );
int         readBin                 (   char* path, float** notes               );
void        exo                     ();

#endif
