#include "Print.h"
#include <stdio.h>
#include <string.h>
int Print(char Desc[9][9])
{
    int i, k;
    for (i = 0; i < 9; i++) {
        for (k = 0; k < 9; k++) {
            printf("%c ", Desc[i][k]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}