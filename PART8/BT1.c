//
// Created by huydo on 4/12/2024.
//
#include "stdio.h"

int main() {

    int x, y;

    printf("Nhap gia tri cho bien x: ");
    scanf("%d", &x);

    printf("Nhap gia tri cho bien y: ");
    scanf("%d", &y);

    if (x<=2000 || x>=3000) {
        printf("Gia tri cua bien x = %d\n", x);
    }
    if (y>=100 && y<=500) {
        printf("Gia tri cua bien y = %d\n", y);
    }

    getchar();
}