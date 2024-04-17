//
// Created by huydo on 4/17/2024.
//
#include "stdio.h"

int main() {
    int slct;
    loop:
    {
        printf("Nhap lua chon cua ban\n"
               "1. Kiem tra so du\n"
               "2. Rut tien\n"
               "3. Ket thuc\n"
               "Lua chon: ");
        scanf("%d", &slct);
    }
    if (slct < 1 || slct > 3) {
        printf("Lua chon cua ban khong dung, vui long nhap lai\n");
        goto loop;
    }
    switch (slct) {
        case 1:
            printf("So du cua ban: 1.000.000.000 VND\n");
            goto loop;
        case 2:
            printf("Nhap so tien muon rut: ");
            int rut;
            scanf("%d", &rut);
            printf("Ban da rut %d VND. So du con lai: %d VND\n", rut, 1000000000 - rut);
            goto loop;
        case 3:
            printf("Cam on ban da su dung dich vu ATM. Hen gap lai!");
            break;
    }
    getchar();
}