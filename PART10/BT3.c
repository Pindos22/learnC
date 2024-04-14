//
// Created by huydo on 4/14/2024.
//
#include "stdio.h"

int main() {
    int n;
    printf("Nhap so can xem: ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; ++i) {
        printf("%d * %d = %d\n", n, i, n*i);
    }

    getchar();
}