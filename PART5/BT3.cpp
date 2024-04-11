//
// Created by huydo on 4/12/2024.
//
#include "stdio.h"

int main() {
    int result, a=10, b=8, c=6, d=5, e=2;

    result = a - b - c - d;
    printf("%d\n", result);

    result = a - b + c - d;
    printf("%d\n", result);

    result = a + b / c / d;
    printf("%d\n", result);

    result = a + b / c * d;
    printf("%d\n", result);

    result = a / b * c * d;
    printf("%d\n", result);

    result = a % b / c * d;
    printf("%d\n", result);

    result = a % b % c % d;
    printf("%d\n", result);

    result = a - (b - c) - d;
    printf("%d\n", result);

    result = (a - (b - c)) - d;
    printf("%d\n", result);

    result = a - ((b - c) - d);
    printf("%d\n", result);

    result = a % (b % c) * d * e;
    printf("%d\n", result);

    result = a + (b - c) * d - e;
    printf("%d\n", result);

    result = (a + b) * c + d * e;
    printf("%d\n", result);

    result = (a + b) * (c / d) % e;
    printf("%d\n", result);

    getchar();
}