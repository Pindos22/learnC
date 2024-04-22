//
// Created by huydo on 4/21/2024.
//
#include "stdio.h"

int main() {
    int n, a[50];
    printf("Nhap so phan tu trong mang: ");
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        printf("Nhap so thu %d: ", i+1);
        scanf("%d", &a[i]);
    }

    int max = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] >= max) {
            max = a[i];
        }
    }

    int min = max;
    for (int i = 0; i < n; ++i) {
        if (a[i] <= min) {
            min = a[i];
        }
    }

    printf("\nGia tri lon nhat trong mang la: %d", max);
    printf("\nGia tri be nhat trong mang la: %d", min);

    getchar();
}