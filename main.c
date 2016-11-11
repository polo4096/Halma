#include <stdio.h>
#include <stdlib.h>

int NB_LIGNE = 16;
int NB_COLONNE = 16;

int*** allocAndInit();

int main()
{
    int*** tab = allocAndInit();

    tab[0][0] = 1; // On place un pion Player A
    tab[5][6] = 1;
    tab[15][3] = 2; // On place un pion Player B

    int i, j;
    for(i = 0; i < NB_LIGNE * 2 + 1; i++) {
        for(j = 0; j < NB_COLONNE; j++) {
            if(i % 2 == 0) {
                printf("|---");
            } else {
                if(tab[i / 2][j] == 1) {
                    printf("| * ");
                } else if(tab[i / 2][j] == 2) {
                    printf("| o ");
                } else {
                    printf("|   ");
                }
            }
        }
        printf("|\n");
    }

    return 0;
}

int*** allocAndInit()
 {
    int*** tab = (int***) malloc(NB_LIGNE * sizeof(int**));
    int i, j;
    for(i = 0; i < NB_LIGNE; i++) {
        tab[i] = (int**) malloc(NB_COLONNE * sizeof(int*));
    }

    for(i = 0; i < NB_LIGNE; i++) {
        for(j = 0; j < NB_COLONNE; j++) {
               tab[i][j] = 0; // Pas de pion
        }
    }

    return tab;
 }
