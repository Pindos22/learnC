//
// Created by huydo on 4/22/2024.
//
#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int main() {
    int a[20];
    srand(time(NULL));
    for (int i = 0; i < 20; ++i) {
        a[i] = rand() % 100;
    }

    int n, dif = 0;
    printf("Nhap mot so (0 - 99): ");
    scanf("%d", &n);
    for (int i = 0; i < 20; ++i) {
        if (n == a[i]) { dif++; }
    }

    if (dif != 0) {
        printf("So vua nhap thuoc mang sinh ngau nhien!");
    } else {
        printf("So vua nhap khong thuoc mang sinh ngau nhien!");
    }

    printf("\nMang sinh ngau nhien: \n");
    for (int i = 0; i < 20; ++i) {
        printf("%d ", a[i]);
    }

    getchar();
}