//
// Created by huydo on 5/3/2024.
//
#include "stdio.h"

int minIndex(int a[], int n);

int maxIndex(int a[], int n);

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; ++i) {
        printf("Nhap gia tri thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Vi tri gia tri nho nhat trong mang: %d\n", minIndex(arr, n));
    printf("Vi tri gia tri lon nhat trong mang: %d\n", maxIndex(arr, n));

    getchar();
}

int minIndex(int a[], int n) {
    int min = a[0];
    int index = 0;

    for (int i = 1; i < n; ++i) {
        if (a[i] <= min) {
            min = a[i];
            index = i;
        }
    }

    return index;
}

int maxIndex(int a[], int n) {
    int max = a[0];
    int index = 0;

    for (int i = 1; i < n; ++i) {
        if (a[i] >= max) {
            max = a[i];
            index = i;
        }
    }

    return index;
}