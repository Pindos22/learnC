//
// Created by huydo on 5/3/2024.
//
#include "stdio.h"

int findMaxElement(int a[], int n);

int findMinElement(int a[], int n);

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; ++i) {
        printf("Nhap gia tri thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Gia tri nho nhat trong mang la: %d\n", findMinElement(arr, n));
    printf("Gia tri lon nhat trong mang la: %d\n", findMaxElement(arr, n));
}

int findMaxElement(int a[], int n) {
    int max = a[0];

    for (int i = 1; i < n; ++i) {
        if (a[i] >= max) { max = a[i]; }
    }

    return max;
}

int findMinElement(int a[], int n) {
    int min = a[0];

    for (int i = 1; i < n; ++i) {
        if (a[i] <= min) { min = a[i]; }
    }

    return min;
}

