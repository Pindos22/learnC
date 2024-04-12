//
// Created by huydo on 4/12/2024.
//
#include "stdio.h"

int main() {

    int slct, luong;
    printf("Nhap luong co ban cua nhan vien: $ ");
    scanf("%d", &luong);
    printf("Chon loai nhan vien:\n"
           "1. Nhan vien loai A\n"
           "2. Nhan vien loai B\n"
           "3. Nhung loai khac\n");
    do {
        scanf("%d", &slct);
    } while (slct<1 || slct>3);

    int tongluong;

    switch (slct) {
        case 1:
            tongluong = luong + 300;
            break;
        case 2:
            tongluong = luong + 250;
            break;
        case 3:
            tongluong = luong + 100;
            break;
    }
    printf("Tong luong cuoi thang cua nhan vien la: $ %d", tongluong);

    getchar();
}