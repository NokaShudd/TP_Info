#ifndef TP5_HEADER
#define TP5_HEADER

typedef struct NombreRationnel{
    int numerateur, denominateur;
} nombreRationnel;


nombreRationnel add         (nombreRationnel number1, nombreRationnel number2);
nombreRationnel multiply    (nombreRationnel number1, nombreRationnel number2);

void            showNumber  (nombreRationnel number);

nombreRationnel newNumber   ();

int             getMax      (int entiers[], int nombre);

void            TP5exo1        ();
void            TP5exo2        ();
void            TP5exo3        ();

#endif