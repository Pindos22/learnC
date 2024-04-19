//
// Created by huydo on 4/19/2024.
//
#include "stdio.h"

int main() {
    int n;

    nhapchieucao:
    {
        printf("Nhap chieu cao cua tam giac: ");
        scanf("%d", &n);
    };

    if (n < 2) goto nhapchieucao;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            printf("*");
        }
        printf("\n");
    }

    getchar();
}