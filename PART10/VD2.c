//
// Created by huydo on 4/17/2024.
//
#include "stdio.h"

int main() {
    int pin = 1234;
    int balance = 100000000;
    int maxATMP = 3;
    int slct;

    int enterPin;
    int withdraw;
    int atmp = 0;

    printf("Chao mung ban den ATM!\n");

    do {
        printf("Nhap ma PIN cua ban (So lan thu con lai: %d): ", maxATMP - atmp);
        scanf("%d", &enterPin);

        if (enterPin == pin) {
            printf("Ban da dang nhap thanh cong!\n");
            goto loop;
        } else {
            printf("Ma PIN khong hop le!\n");
            atmp++;
        }
    } while (atmp < maxATMP);

    loop:
    {
        if (atmp == 3) {
            printf("Dich vu tam thoi bi khoa do ban nhap sai qua nhieu lan!");
            return 0;
        } else {
            chon:
            printf("\nNhap lua chon cua ban: \n"
                   "1. Kiem tra so du\n"
                   "2. Rut tien\n"
                   "3. Ket thuc\n"
                   "Lua chon: ");
            scanf("%d", &slct);
        }
    }

    switch (slct) {
        case 1:
            printf("So du cua ban la: %d VND\n", balance);
            goto chon;
        case 2:
            printf("Nhap so tien muon rut: ");
            scanf("%d", &withdraw);
            if (withdraw > balance) {
                printf("So du khong du de rut tien");
            } else {
                balance = balance - withdraw;
                printf("Ban da rut %d VND. So du con lai la: %d VND\n", withdraw, balance);
            }
            goto chon;
        case 3:
            printf("\nCam on ban da su dung dich vu ATM. Hen gap lai!");
            break;
        default:
            printf("Lua chon cua ban khong hop le. Vui long chon lai\n");
            goto chon;
    }

    getchar();
}