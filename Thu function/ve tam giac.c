//
// Created by huydo on 4/26/2024.
//
#include "stdio.h"

int main() {
    int cao;
    printf("Nhap chieu cao cua tam giac: ");
    scanf("%d", &cao);

    for (int i = 0; i < cao; ++i) {
        for (int j = 0; j <= i; ++j) {
            printf("*");
        }
        printf("\n");
    }
}