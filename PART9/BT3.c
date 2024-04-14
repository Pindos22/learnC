//
// Created by huydo on 4/14/2024.
//
#include "stdio.h"
#include "conio.h"

int main() {
    int n;
    printf("Nhap so so trong chuoi Fibonaci: ");
    scanf("%d", &n);

    int mang[n];
    mang[0] = 0;
    mang[1] = 1;

    for (int i = 2; i <= n; ++i) {
        mang[i] = mang[i-2] + mang[i-1];
    }

    for (int i = 1; i <= n; ++i) {
        printf("%d ", mang[i]);
    }

    getchar();
}