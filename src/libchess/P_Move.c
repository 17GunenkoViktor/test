#include "P_Move.h"
#include <stdio.h>
#include <string.h>
#include "Print.h"
int P_Move(char move[7], char Desc[9][9])
{
    int cori, corj, corI, corJ; 
    switch (move[0]) {
    case 'a':
        corj = 1;
        break;
    case 'b':
        corj = 2;
        break;
    case 'c':
        corj = 3;
        break;
    case 'd':
        corj = 4;
        break;
    case 'e':
        corj = 5;
        break;
    case 'f':
        corj = 6;
        break;
    case 'g':
        corj = 7;
        break;
    case 'h':
        corj = 8;
        break;
    default:
        return 1;
    }
    switch (move[1]) {
    case '1':
        cori = 8;
        break;
    case '2':
        cori = 7;
        break;
    case '3':
        cori = 6;
        break;
    case '4':
        cori = 5;
        break;
    case '5':
        cori = 4;
        break;
    case '6':
        cori = 3;
        break;
    case '7':
        cori = 2;
        break;
    case '8':
        cori = 1;
        break;
    default:
        return 1;
    }
    switch (move[3]) {
    case 'a':
        corJ = 1;
        break;
    case 'b':
        corJ = 2;
        break;
    case 'c':
        corJ = 3;
        break;
    case 'd':
        corJ = 4;
        break;
    case 'e':
        corJ = 5;
        break;
    case 'f':
        corJ = 6;
        break;
    case 'g':
        corJ = 7;
        break;
    case 'h':
        corJ = 8;
        break;
    default:
        return 1;
    }
    switch (move[4]) {
    case '1':
        corI = 8;
        break;
    case '2':
        corI = 7;
        break;
    case '3':
        corI = 6;
        break;
    case '4':
        corI = 5;
        break;
    case '5':
        corI = 4;
        break;
    case '6':
        corI = 3;
        break;
    case '7':
        corI = 2;
        break;
    case '8':
        corI = 1;
        break;
    default:
        return 1;
    }
    if (((move[2] == '-') & (Desc[corI][corJ] != ' '))
        || ((move[2] == 'x') & (Desc[corI][corJ] == ' '))) {
        return 3;
    }
    Desc[corI][corJ] = Desc[cori][corj];
    Desc[cori][corj] = ' ';
    Print(Desc);
    return 0;
}