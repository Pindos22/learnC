//
// Created by huydo on 4/26/2024.
//
#include "stdio.h"

int main() {
    int dai, rong;
    printf("Nhap chieu dai (doc): ");
    scanf("%d", &dai);
    printf("Nhap chieu rong (ngang): ");
    scanf("%d", &rong);

    for (int i = 0; i < dai; ++i) {
        for (int j = 0; j < rong; ++j) {
            printf("* ");
        }
        printf("\n");
    }
}