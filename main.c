#include <stdio.h>
#include "tp3/tp3.h"
#include "tp4/tp4_exo.h"
#include "tp5/tp5_exo.h"
#include "tp6/tp6_exo.h"
#include "tp7/tp7_exo.h"
#include "tp8/tp8_exo.h"
#include "tp9/tp9_exo.h"

int chooseExo(int exoMax){
    int exo = 0;
    printf("Choisi l'exo (entre 1 et %d, 0 = retour au choix de TP) :", exoMax);
    scanf(" %d", &exo);
    return exo;
    
}


void menu(){
    int tp = 0;
    int exoNb = 0;
    do{
        printf("Choisi le TP : ");
        scanf("%d", &tp);
        switch (tp){
        case 3:
            exoNb = chooseExo(10);
            
            switch (exoNb){
                case 1:
                    return TP3exo1();
                case 2:
                    return TP3exo2();
                case 3:
                    return TP3exo3();
                case 4:
                    return TP3exo4();
                case 5:
                    return TP3exo5();
                case 6:
                    return TP3exo6();
                case 7:
                    return TP3exo7();
                case 8:
                    return TP3exo8();
                case 9:
                    return TP3exo9();
                case 10:
                    return TP3exo10();
                
                default:
                    break;
            }
        
        case 4:
            exoNb = chooseExo(3);
            
            switch (exoNb){
                case 1:
                    return TP4exo1();
                case 2:
                    return TP4exo2();
                case 3:
                    return TP4exo3();
                
                default:
                    break;
            }
        case 5:
            exoNb = chooseExo(3);
            
            switch (exoNb){
                case 1:
                    return TP5exo1();
                case 2:
                    return TP5exo2();
                case 3:
                    return TP5exo3();
                
                default:
                    break;
            }
        case 6:
            exoNb = chooseExo(5);
            
            switch (exoNb){
                case 1:
                    return TP6exo1();
                case 2:
                    return TP6exo2();
                case 3:
                    return TP6exo3();
                case 4:
                    return TP6exo4();
                case 5:
                    return TP6exo5();
                
                default:
                    break;
            }
        case 7:
            exoNb = chooseExo(3);
            
            switch (exoNb){
                case 1:
                    return TP7exo1();
                case 2:
                    return TP7exo2();
                case 3:
                    return TP7exo3();
                
                default:
                    break;
            }
        case 8:
            exoNb = chooseExo(3);
            
            switch (exoNb){
                case 1:
                    return TP8exo1();
                case 2:
                    return TP8exo2();
                case 3:
                    return TP8exo3();
                
                default:
                    break;
            }
        
        case 9:
            return exo();
        
        default:
            break;
        }
    } while (tp < 1 || tp > 9);
}

int main(){
    menu();

    return 1;
}