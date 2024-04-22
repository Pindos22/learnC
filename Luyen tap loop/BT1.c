//
// Created by huydo on 4/22/2024.
//
#include "stdio.h"

int main() {
    int a[10];
    for (int i = 0; i < 10; ++i) {
        printf("Nhap so thu %d: ", i+1);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 10; ++i) {
        if (i%2 == 0) {
            printf("%d ", a[i]);
        }
    }
}