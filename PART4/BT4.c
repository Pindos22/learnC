//
// Created by huydo on 4/8/2024.
//
#include <stdio.h>

int main() {
    float r, h, V, pi;
    pi = 3.14;
    printf("Nhap ban kinh mat day: ");
    scanf("%f", &r);
    printf("Nhap chieu cao hinh tru: ");
    scanf("%f", &h);
    V = pi*r*r*h;
    printf("The tich hinh tru la: %0.2f", V);
    return 0;
}