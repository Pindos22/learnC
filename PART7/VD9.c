//
// Created by huydo on 4/12/2024.
//
#include "stdio.h"

int main() {
    int year, bizDone;
    printf("Nhap so nam da lam: ");
    scanf("%d", &year);

    printf("Nhap doanh thu: ");
    scanf("%d", &bizDone);

    int thuong=0;
    if (year >= 10 || (bizDone>=100 && year >= 3))
        thuong = 50000000000000000;
    printf("Thuong: %d", thuong);

    getchar();
}