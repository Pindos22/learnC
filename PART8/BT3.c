//
// Created by huydo on 4/12/2024.
//
#include "stdio.h"

int main () {
    int a, b, c;
    printf("Nhap 3 bien: \n");
    scanf("%d%d%d", &a, &b, &c);
    int max = a;
    if (b >= max) {
        max = b;
    }
    if ( c >= max) {
        max = c;
    }
    printf("So lon nhat la: %d", max);
    getchar();
}