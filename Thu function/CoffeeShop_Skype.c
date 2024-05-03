//
// Created by huydo on 4/26/2024.
//
#include "stdio.h"

void menu();

void order(int slct);

float tinhtien(int a, int b);

int main() {
    int slct, slg;
    do {
        menu();
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &slct);
        if (slct < 1 && slct > 4) {
            printf("Lua chon khong hop le. Vui long chon lai!");
        } else if (slct != 4) {
            printf("Nhap so luong: ");
            scanf("%d", &slg);
            order(slg);
            float total = tinhtien(slct, slg);
            printf("Tong tien: $ %.2f\n\n", total);
        }
    } while (slct != 4);
}

void menu() {
    printf("============COFFEE SHOP============\n"
           "1. Espresso - $2.50\n"
           "2. Cappuccino - $3.00\n"
           "3. Latte - $3.50\n"
           "4. Thoat\n");
}

void order(int slct) {
    switch (slct) {
        case 1:
            printf("Order: Espressp\n");
            break;
        case 2:
            printf("Order: Cappuccino\n");
            break;
        case 3:
            printf("Order: Latte\n");
            break;
        default:
            printf("Order khong hop le. Vui long thu lai\n");
    }
}

float tinhtien(int a, int b) {
    float price;

    switch (a) {
        case 1:
            price = 2.50;
            break;
        case 2:
            price = 3.00;
            break;
        case 3:
            price = 3.50;
            break;
        default:
            price = 0.00;
    }

    return price * b;
}