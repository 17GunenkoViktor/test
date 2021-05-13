#include "Print_err.h"
#include <stdio.h>

int Print_err(int err)
{
    switch (err) {
    case 0:
        return 0;
    case 1:
        printf("incorrect input of the coordinate\n");
        return 1;
    case 2:
        printf("incorrect figure entry\n");
        return 2;
    case 3:
        printf("incorrect move type\n");
        return 3;
    default:
        return 4;
    }
}