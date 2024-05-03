//
// Created by huydo on 5/3/2024.
//
#include "stdio.h"

void boiso(int a, int b);

int main() {
    int n1, n2;
    do {
        printf("Nhap gia tri thu 1: ");
        scanf("%d", &n1);
        printf("Nhap gia tri thu 2: ");
        scanf("%d", &n2);

        if (n1 < 0 || n2 < 0)
            printf("Gia tri nhap vao khong hop le! Vui long nhap lai gia tri > 0");
    } while (n1 < 0 || n2 < 0);

    boiso(n1, n2);

    getchar();
}

void boiso(int a, int b) {
    int min, max;
    if (a > b) {
        max = a;
        min = b;
    } else {
        max = b;
        min = a;
    }
    for (int i = min; i <= max; ++i) {
        if (i % 50 == 0) {
            printf("%d\t", i);
        }
    }
}