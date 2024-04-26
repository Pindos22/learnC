//
// Created by huydo on 4/26/2024.
//
#include "stdio.h"
#include "time.h"
#include "stdlib.h"

int check(int a) {
    return a % 2 == 0;
}

int main() {
    srand(time(NULL));
    int s = rand() % 100;
    if (check(s))
        printf("%d la so chan.\n", s);
    else
        printf("%d la so le.\n", s);

    getchar();
}