//
// Created by huydo on 4/22/2024.
//
#include "stdio.h"

int main() {
    int arr[5];
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        printf("Nhap vao phan tu thu %d: ", i+1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Tong cac phan tu trong mang la: %d", sum);
    getchar();
}