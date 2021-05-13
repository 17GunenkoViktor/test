#include "../libchess/StartDesk.h"
#include "../libchess/Print.h"
#include "../libchess/F_Move.h"
#include "../libchess/P_Move.h"
#include "../libchess/Print_err.h"
#include <stdio.h>
#include <string.h>
int main()
{
    int i, err; 
    char Desc[9][9];
    StartDesk(Desc);
    Print(Desc);
    FILE* file;
    char arr[14];
    char white[7];
    char black[7];
    int c = 0;
    file = fopen("Moves.txt", "r");
    while (fgets(arr, 14, file) != NULL) {
        i = 0;
        c = 0;
        while (arr[i] != ' ') {
            white[i] = arr[i];
            i++;
        }
        i++;
        while (arr[i] != '\0') {
            black[c] = arr[i];
            i++;
            c++;
        }
        switch (white[0]) {
        case 'K':
            printf("%s\n", white);
            err = F_Move(white, Desc, white[0]);
            Print_err(err);
            break;
        case 'Q':
            printf("%s\n", white);
            err = F_Move(white, Desc, white[0]);
            Print_err(err);
            break;
        case 'R':
            printf("%s\n", white);
            err = F_Move(white, Desc, white[0]);
            Print_err(err);
            break;
        case 'N':
            printf("%s\n", white);
            err = F_Move(white, Desc, white[0]);
            Print_err(err);
            break;
        case 'B':
            printf("%s\n", white);
            err = F_Move(white, Desc, white[0]);
            Print_err(err);
            break;
        default:
            printf("%s\n", white);
            err = P_Move(white, Desc);
            Print_err(err);
        }
        if (err == 0) {
            switch (black[0]) {
            case 'K':
                printf("%s\n", black);
                err = F_Move(black, Desc, black[0]);
                Print_err(err);
                break;
            case 'Q':
                printf("%s\n", black);
                err = F_Move(black, Desc, black[0]);
                Print_err(err);
                break;
            case 'R':
                printf("%s\n", black);
                err = F_Move(black, Desc, black[0]);
                Print_err(err);
                break;
            case 'N':
                printf("%s\n", black);
                err = F_Move(black, Desc, black[0]);
                Print_err(err);
                break;
            case 'B':
                printf("%s\n", black);
                err = F_Move(black, Desc, black[0]);
                Print_err(err);
                break;
            default:
                printf("%s\n", black);
                err = P_Move(black, Desc);
                Print_err(err);
            }
        }
    }
    return 0;
}