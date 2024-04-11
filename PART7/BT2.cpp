//
// Created by huydo on 4/12/2024.
//
#include "stdio.h"

int main() {

    int a, b, T;

    printf("Nhap so thu nhat: ");
    scanf("%d", &a);

    printf("Nhap so thu hai: ");
    scanf("%d", &b);

    T = a * b;

    if (T>100) {
        printf("Tich cua hai so lon hon 100!");
    } else if (T == 100) {
        printf("Tich cua hai so bang 100!");
    } else {
        printf("Tich cua hai so be hon 100!");
    }

    getchar();
}