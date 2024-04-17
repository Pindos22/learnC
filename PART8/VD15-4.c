//
// Created by huydo on 4/15/2024.
//
#include "stdio.h"

int main() {
    char ten[50];
    int slg, mbs, tax=8;
    float gia, total;

    printf("Nhap ten do uong: ");
    fgets(ten, sizeof ten, stdin);

    printf("Nhap so luong do uong: ");
    scanf("%d", &slg);

    printf("Nhap gia do uong: ");
    scanf("%f", &gia);

    printf("Nhap level membership: ");
    scanf("%d", &mbs);

    switch (mbs) {
        case 0:
            total = gia * slg * (100+tax) / 100;
            break;
        case 1:
            total = (gia * slg) * 95 / 100 * (100+tax) / 100;
            break;
        case 2:
            total = (gia * slg) * 9 / 10 * (100+tax) / 100;
            break;
    }

    printf("\n%s So luong: %d\nLv membership: %d\nTong gia: %.2f vnd", ten, slg, mbs, total);

    getchar();
}