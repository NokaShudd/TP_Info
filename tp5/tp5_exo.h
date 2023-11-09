#ifndef HEADER_FILE_NAME
#define HEADER_FILE_NAME

typedef struct NombreRationnel{
    int numerateur, denominateur;
} nombreRationnel;


nombreRationnel add         (nombreRationnel number1, nombreRationnel number2);
nombreRationnel multiply    (nombreRationnel number1, nombreRationnel number2);

void            showNumber  (nombreRationnel number);

nombreRationnel newNumber   ();

int             getMax      (int entiers[], int nombre);

void            exo1        ();
void            exo2        ();
void            exo3        ();

#endif