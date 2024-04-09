//
// Created by huydo on 4/9/2024.
//
#include <stdio.h>

int main() {
    float C, F;
    printf("Nhap do C: ");
    scanf("%f", &C);
    F = (C*9/5) + 32;
    printf("Do F: %0.2f", F);
}