//
// Created by huydo on 4/22/2024.
//
#include "stdio.h"

int main() {
    int arr1[5];
    float arr2[10];

    for (int i = 0; i < 5; ++i) {
        printf("Nhap vao so thu %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    for (int i = 0; i < 10; ++i) {
        if (i < 5) {
            arr2[i] = arr1[i];
        } else {
            arr2[i] = 0;
        }
    }

    printf("Mang so nguyen: \n");
    for (int i = 0; i < 5; ++i) {
        printf("%d ", arr1[i]);
    }

    printf("\nMang so thuc: \n");
    for (int i = 0; i < 10; ++i) {
        printf("%f ", arr2[i]);
    }

    getchar();
}