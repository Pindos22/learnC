//
// Created by huydo on 4/12/2024.
//
#include "stdio.h"

int main () {
    int year;

    printf("\nPlease enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0) {
        printf("\n%d is a leap year!", year);
    }
    getchar();
}