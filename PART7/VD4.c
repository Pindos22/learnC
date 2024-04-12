//
// Created by huydo on 4/12/2024.
//
#include "stdio.h"

int main() {
    int num, res;

    printf("Enter a number: ");
    scanf("%d", &num);

    res = num % 2;

    if (res == 0)
        printf("THe number is Even");
    else
        printf("The number is Odd");

    getchar();
}