//
// Created by huydo on 4/22/2024.
//
#include "stdio.h"

int main() {
    int a[5];
    for (int i = 0; i < 5; ++i) {
        nhap:
        {
            printf("Nhap so thu %d: ", i + 1);
            scanf("%d", &a[i]);
        }

        int check = 0;
        for (int j = 1; j < a[i]; ++j) {
            if (a[i] % j == 0) { check++; }
        }

        if (check > 1) {
            printf("So vua nhap khong phai so nguyen to, vui long nhap lai!\n");
            goto nhap;
        }
    }

    int max = a[0];
    int min = a[0];
    printf("\nMang gom:\n");
    for (int i = 0; i < 5; ++i) {
        if (a[i] >= max) {max = a[i];}
        if (a[i] <= min) {min = a[i];}
        printf("%d\t", a[i]);
    }
    printf("\nPhan tu lon nhat cua mang la: %d", max);
    printf("\nPhan tu nho nhat cua mang la: %d", min);

    getchar();
}