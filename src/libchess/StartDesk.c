#include "StartDesk.h"
int StartDesk(char Desc[9][9])
{
    int i, k;
    Desc[1][1] = 'r';
    Desc[1][2] = 'n';
    Desc[1][3] = 'b';
    Desc[1][4] = 'q';
    Desc[1][5] = 'k';
    Desc[1][6] = 'b';
    Desc[1][7] = 'n';
    Desc[1][8] = 'r';
    Desc[2][1] = 'p';
    Desc[2][2] = 'p';
    Desc[2][3] = 'p';
    Desc[2][4] = 'p';
    Desc[2][5] = 'p';
    Desc[2][6] = 'p';
    Desc[2][7] = 'p';
    Desc[2][8] = 'p';
    Desc[7][1] = 'P';
    Desc[7][2] = 'P';
    Desc[7][3] = 'P';
    Desc[7][4] = 'P';
    Desc[7][5] = 'P';
    Desc[7][6] = 'P';
    Desc[7][7] = 'P';
    Desc[7][8] = 'P';
    Desc[8][1] = 'R';
    Desc[8][2] = 'N';
    Desc[8][3] = 'B';
    Desc[8][4] = 'Q';
    Desc[8][5] = 'K';
    Desc[8][6] = 'B';
    Desc[8][7] = 'N';
    Desc[8][8] = 'R';
    Desc[0][1] = 'a';
    Desc[0][2] = 'b';
    Desc[0][3] = 'c';
    Desc[0][4] = 'd';
    Desc[0][5] = 'e';
    Desc[0][6] = 'f';
    Desc[0][7] = 'g';
    Desc[0][8] = 'h';
    Desc[0][0] = ' ';
    Desc[1][0] = '8';
    Desc[2][0] = '7';
    Desc[3][0] = '6';
    Desc[4][0] = '5';
    Desc[5][0] = '4';
    Desc[6][0] = '3';
    Desc[7][0] = '2';
    Desc[8][0] = '1';
    for (i = 3; i < 7; i++) {
        for (k = 1; k < 9; k++) {
            Desc[i][k] = ' ';
        }
    }
    return 0;
}