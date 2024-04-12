//
// Created by huydo on 4/12/2024.
//
#include "stdio.h"

int main() {
    int a, b, hieu;

    printf("Nhap so thu nhat: ");
    scanf("%d", &a);

    printf("Nhap so thu hai: ");
    scanf("%d", &b);

    hieu = a - b;
    printf("Hieu hai so = %d\n", hieu);

    if (hieu == a) {
        printf("Hieu bang gia tri %d\n", a);
    } else if (hieu == b) {
        printf("Hieu bang gia tri %d\n", b);
    } else printf("Hieu khong bang bat ky gia tri nao da duoc nhap\n");

    getchar();
}