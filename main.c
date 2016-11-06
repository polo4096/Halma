#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 10;
    int m = 10;

    char*** tab = (char***) malloc(n * sizeof(char**));
    int i = 0;
    for(i = 0; i < n; i++) {
        tab[i] = (char**) malloc(m * sizeof(char*));
    }

    i = 0;
    int j = 0;
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            if(j % 2 == 0) {
                tab[i][j] = "|";
            } else {
                if(i % 2 == 0) {
                    tab[i][j] = " * ";
                } else {
                    tab[i][j] = "---";
                }
            }
        }
        tab[i][m-1] = "\n";
    }


    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            printf("%s", tab[i][j]);
        }
    }
    return 0;
}
