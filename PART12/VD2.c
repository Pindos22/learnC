//
// Created by huydo on 4/22/2024.
//
#include "stdio.h"

int main() {
    int n, a[50];
    nhap:
    {
        printf("Nhap so phan tu trong mang: ");
        scanf("%d", &n);
    }

    if (n < 0) {
        printf("Nhap khong dung vui long nhap lai!");
        goto nhap;
    }

    for (int i = 0; i < n; ++i) {
        printf("Nhap so thu %d: ", i+1);
        scanf("%d", &a[i]);
    }

    int max = a[0];
    for (int i = 0; i < n; ++i) {
        if (a[i] >= max) {
            max = a[i];
        }
    }

    int min = a[0];
    for (int i = 0; i < n; ++i) {
        if (a[i] <= min) {
            min = a[i];
        }
    }

    int tbc = 0;
    for (int i = 0; i < n; ++i) {
        tbc += a[i];
    }
    tbc = tbc / n;

    printf("\nGia tri lon nhat trong mang la: %d", max);
    printf("\nGia tri be nhat trong mang la: %d", min);
    printf("\nGia tri trung binh cong cua mang la: %d", tbc);

    getchar();
}