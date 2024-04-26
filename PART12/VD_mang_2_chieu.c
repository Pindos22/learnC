//
// Created by huydo on 4/24/2024.
//
#include "stdio.h"

int main() {
    int arr[3][2];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("Nhap so thu [%d] [%d]: ", i + 1, j + 1);
            fflush(stdin);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    getchar();
}