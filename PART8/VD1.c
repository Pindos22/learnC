//
// Created by huydo on 4/12/2024.
//
#include "stdio.h"
#include "stdlib.h"

int main() {

    printf("Ban da dang nhap thanh cong. Xin chuc mung!\n");
    printf("Chon chuc nang ban muon su dung: \n"
           "1. Rut tien\n"
           "2. Kiem tra so du\n"
           "3. Chuyen khoan\n"
           "4. Kiem tra lich su giao dich\n"
           "Nhan lua chon: ");

    int slct = 0;
    scanf("%d", &slct);

    if (slct>=1 && slct<=4) {
        switch (slct) {
            case 1:
                printf("Giao dich thanh cong. So du cua ban la 3.000.000 vnd");
                break;
            case 2:
                printf("So du trong tai khoan cua ban la 15.000.000 vnd");
                break;
            case 3:
                printf("Nhap stk can chuyen khoan");
                break;
            case 4:
                printf("Lich su giao dich: ");
                break;
            default:
                printf("Lua chon cua ban khong chinh xac");
                break;
        }
    } else {
        printf("Lua chon cua ban khong chinh xac. Moi ban nhap lua chon tu 1 den 4\n");
    }getchar();
}