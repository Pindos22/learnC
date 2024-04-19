//
// Created by huydo on 4/19/2024.
//
#include "stdio.h"

int main() {
    int num, result = 0;
    do {
        printf("Nhap so: ");
        scanf("%d", &num);
        result += 1;
    } while (num >= 0 && num <= 100);

    printf("So so vua nhap la: %d", result);
    getchar();
}