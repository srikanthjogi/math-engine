#include <stdio.h>
#include "input.h"

int get_integer(const char *msg) {
    int x;
    printf("%s", msg);
    scanf("%d", &x);
    return x;
}

