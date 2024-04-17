//
// Created by huydo on 4/17/2024.
//
#include "stdio.h"
#include "stdlib.h"

int main() {
    int guess, randomNum;

    randomNum = rand() % 100 + 1;

    guess:
    {
        printf("Doan so ngau nhien tu 1 - 100: ");
        scanf("%d", &guess);
    };

    if (guess > 100 || guess < 1) {
        printf("Du doan cua ban khong nhap duoc, vui long nhap lai\n");
        goto guess;
    } else if (guess > randomNum) {
        printf("Ban doan cao hon!\n");
        goto guess;
    } else if (guess < randomNum) {
        printf("Ban doan thap hon!\n");
        goto guess;
    } else
        printf("Ban doan chinh xac, do la so %d", guess);

    getchar();
}