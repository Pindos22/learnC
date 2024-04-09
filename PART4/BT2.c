//
// Created by huydo on 4/8/2024.
//
#include <stdio.h>

int main() {
    float a, b, c, d, e, f, z;
    printf("z = a*b+(c/d)-e*f\n");
    printf("Nhap so a: ");
    scanf("%f", &a);
    printf("Nhap so b: ");
    scanf("%f", &b);
    printf("Nhap so c: ");
    scanf("%f", &c);
    printf("Nhap so d: ");
    scanf("%f", &d);
    printf("Nhap so e: ");
    scanf("%f", &e);
    printf("Nhap so f: ");
    scanf("%f", &f);
    z = a*b + (c/d) - e*f;
    printf("Ket qua cua phuong trinh la: %0.2f", z);
    return 0;
}