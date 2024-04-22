//
// Created by huydo on 4/19/2024.
//
#include "stdio.h"

int main() {
    int arry[50];
    int n;
    printf("Nhap so so trong mang:");
    scanf("%d", &n);
    for (int i = n-1; i >= 0; --i) {
        printf("Nhap so thu %d: ",n-i);
        fflush(stdin);
        scanf("%d", &arry[i]);
    }

    for (int i = 0; i < n; ++i) {
        printf("%d\n", arry[i]);
    }
}