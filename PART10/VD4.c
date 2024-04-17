//
// Created by huydo on 4/17/2024.
//
#include "stdio.h"

#define coffe_price 2.5
#define tea_price 2.0
#define smoothie_price 3.0

int main() {
    int numcoffe, numtea, numsmoothie;
    numcoffe = numtea = numsmoothie = 0;
    float total;
    int slct;

    printf("Chao mung ban den quan ca phe!\n");
    menu:
    {
        printf("------MENU------\n"
               "1. Coffee ($ %.2f)\n"
               "2. Tea ($ %.2f)\n"
               "3. Smoothie ($ %.2f)\n"
               "4. Quit\n"
               "Lua chon cua ban: ", coffe_price, tea_price, smoothie_price);
        scanf("%d", &slct);
    };

    switch (slct) {
        case 1:
            numcoffe++;
            goto menu;
        case 2:
            numtea++;
            goto menu;
        case 3:
            numsmoothie++;
            goto menu;
        case 4:
            break;
        default:
            printf("Lua chon cua ban khong dung, vui long nhap lai!\n");
            goto menu;
    }

    total = (numcoffe * coffe_price) + (numtea * tea_price) + (numsmoothie * smoothie_price);

    printf("Hoa don: \n"
           "Coffee: %d\n"
           "Tea: %d\n"
           "Smoothie: %d\n"
           "Tong tien: $ %.2f\n", numcoffe, numtea, numsmoothie, total);

    getchar();
}