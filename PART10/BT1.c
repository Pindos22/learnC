//
// Created by huydo on 4/14/2024.
//
#include "stdio.h"

int main() {
    char ten[50];
    int tuoi;

    printf("Nhap ten cua ban: ");
    fgets(ten, sizeof ten, stdin);

    printf("Nhap tuoi cua ban: ");
    scanf("%d", &tuoi);

    for (int i = 0; i < tuoi; ++i) {
        printf("\nTen cua ban la %s, %d tuoi", ten, tuoi);
    }

    getchar();
}