//
// Created by huydo on 5/3/2024.
//
#include "stdio.h"

float chuvi(int a, int b);

float dientich(int a, int b);

int main() {
    float dai, rong;
    do {
        printf("Nhap chieu dai: ");
        scanf("%f", &dai);
        printf("Nhap chieu rong: ");
        scanf("%f", &rong);
        if (dai <= 0) {
            printf("Chieu dai khong hop le!\n");
        } else if (rong <= 0) {
            printf("Chieu rong khong hop le!\n");
        }
    } while (dai <= 0 || rong <= 0);

    float C = chuvi(dai, rong);
    float S = dientich(dai, rong);

    printf("\nChu vi: %.2f", C);
    printf("\nDien tich: %.2f", S);

    getchar();
}

float chuvi(int a, int b) {
    float C = (a + b) * 2;
    return C;
}

float dientich(int a, int b) {
    float S = a * b;
    return S;
}