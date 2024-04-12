//
// Created by huydo on 4/12/2024.
//
#include "stdio.h"

int main() {
    int a;
    printf("Nhap so can xac dinh:");
    scanf("%d", &a);
    int du = a % 2;
    switch (du) {
        case 1:
            printf("So %d la so le", a);
            break;
        case 0:
            printf("So %d la so chan", a);
            break;
    }
    getchar();
}