// FILE INCLUSION ---------------------------------------------------------------------------------
#include <iostream>                                                             // Pour cout et cin
using namespace std;                                                            // Pour éviter d'écrire std:: devant les fonctions

// MAIN FUNCTION ----------------------------------------------------------------------------------
int main(){                                                                 // Debut de la fonction main()
    int a = 1;                                                                  // Premier terme de la suite
    int b = 1;                                                                  // Deuxième terme de la suite
    int c = 2;                                                                  // Troisième terme de la suite
    int d;                                                                      // Quatrième terme de la suite

    while (d < 10000){                                                          // Tant que le quatrième terme est inférieur à 10000
        if (d % 3 == 0)                                                         // Si le quatrième terme est divisible par 3
            cout << d << endl;                                                  // On affiche le résultat
        d = a + b + c;                                                          // On calcule le quatrième terme
        a = b;                                                                  // On décale les termes de la suite
        b = c;                                                                  // On décale les termes de la suite
        c = d;                                                                  // On décale les termes de la suite
    }
    return 0;                                                                   // Retourne 0
}                                                                           // Fin de la fonction main()
// END OF FILE -------------------------------------------------------------------------------------
