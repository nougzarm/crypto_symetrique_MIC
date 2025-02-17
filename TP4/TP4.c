#include "TP4.h"

/*  @nougzarm
    Crypto symétrique - TP4
    M2 MIC 2024-2025    
    
    Sommaire:
        (0. Structures)
          */

/*  |----------------------------------------------------------------------------------------------------------------|
    |----------------------------------------------------------------------------------------------------------------|
    |                                              1. Fonctions maths                                                |
    |----------------------------------------------------------------------------------------------------------------|
    |----------------------------------------------------------------------------------------------------------------|
*/
unsigned int puissance(int x, unsigned int n){
    int resultat = 1;
    for(int i = 0; i < n; i++){
        resultat *= x;
    }
    return resultat;
}


int main(int argc, char *argv[]) {
    return 0;
}