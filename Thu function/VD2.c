//
// Created by huydo on 4/26/2024.
//
#include "stdio.h"

void vehcn(int a);

int main() {
    int size;
    printf("Ban muon co bao nhieu ngoi sao o canh: ");
    scanf("%d", &size);
    vehcn(size);

    getchar();
}

void vehcn(int a) {
    for (int i = 0; i < a; ++i) {
        printf("\n");
        for (int j = 0; j < a; ++j) {
        printf("* ");
        }
    }
}