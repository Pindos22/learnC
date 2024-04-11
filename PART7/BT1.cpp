//
// Created by huydo on 4/12/2024.
//
#include "stdio.h"

int main() {

    int a, b, du;

    printf("Nhap so thu nhat: ");
    scanf("%d", &a);

    printf("Nhap so thu hai: ");
    scanf("%d", &b);

    du = a%b;

    if (du==0) {
        printf("So thu nhat chia het cho so thu hai!\n");
    } else {
        printf("So thu nhat khong chia het cho so thu hai!\n");
    }

    getchar();
}