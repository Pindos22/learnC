//
// Created by huydo on 4/12/2024.
//
#include "stdio.h"

int main() {
    float x;
    printf("Nhap chieu dai(cm): ");
    scanf("%f", &x);

    float ft, inch;
    inch = x/2.54;
    ft = inch/12;

    printf("Chieu dai(ft): %.1f\n", ft);
    printf("Chieu dai(inch): %.1f\n", inch);

    getchar();
}