//
// Created by huydo on 5/3/2024.
//
#include "stdio.h"

int soluong(int a) {
    do {
        printf("Nhap so luong: ");
        scanf("%d", &a);
        if (a <= 0) {
            printf("So luong khong hop le!\n");
        }
    } while (a <= 0);
    return a;
}

float dongia(float a) {
    do {
        printf("Nhap don gia: $ ");
        scanf("%f", &a);
        if (a <= 0) {
            printf("Don gia khong hop le!\n");
        }
    } while (a <= 0);
    return a;
}

float total(int a, float b) {
    float tien = a * b;

    if (tien >= 200) {
        tien = tien - (tien * 5 / 100);
    } else if (tien >= 100) {
        tien = tien - (tien * 2 / 100);
    }

    tien = tien + (tien / 10);
    return tien;
}

int main() {
    int slg = soluong(slg);
    float gia = dongia(gia);
    float tong = total(slg, gia);
    printf("Tong tien (da kem theo thue): $%.2f", tong);

    getchar();
}