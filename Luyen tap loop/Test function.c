//
// Created by huydo on 4/22/2024.
//
#include "stdio.h"

int check(int i) {
    for (int j = 2; j < i; ++j) {
        if (i % j == 0) { return 1; }
    }
    return 0;
}

void nhap(int a) {
    scanf("%d", &a);
}

int main() {
    int a[5];
    for (int i = 0; i < 5; ++i) {
        printf("Nhap so thu %d: ", i + 1);
        nhap(a[i]);
        check(a[i]);
        int isPrime = check(3);
        if (isPrime == 1) {
            printf("So vua nhap khong phai so nguyen to, nhap lai so %d: ", i + 1);
            nhap(a[i]);
        }
    }
}