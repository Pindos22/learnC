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
        if ( slct == 1)
            printf("Giao dich thanh cong. So du con lai la 3.000.000 vnd");
        else if (slct == 2)
            printf("So du trong tai khoan cua ban la 15.000.000 vnd");
        else if (slct == 3)
            printf("Nhap stk can chuyen khoan");
        else if (slct == 4)
            printf("Lich su giao dich: ");
        else
            printf("Lua chon cua ban khong chinh xac");
        }
    else {
        printf("Lua chon cua ban khong chinh xac. Moi ban nhap lua chon tu 1 den 4\n");
    }
    getchar();
}