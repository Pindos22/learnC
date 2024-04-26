//
// Created by huydo on 4/26/2024.
//
#include "stdio.h"
#include "time.h"
#include "stdlib.h"

int tong(int a, int b) {
    return a + b;
}

int main() {
    srand(time(NULL));
    int a = rand() & 100;
    int b = rand() % 100;
    int result = tong(a, b);
    printf("Tong %d + %d = %d", a, b, result);

    getchar();
}