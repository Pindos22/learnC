//
// Created by huydo on 4/26/2024.
//
#include "stdio.h"

void vehcn(int dai, int rong);

void vetg(int cao);

int select(int a) {
    do {
        fflush(stdin);
        scanf("%d", &a);
    } while (a < 1 || a > 2);
    return a;
}

int main() {
    int dai, slct, rong, cao;
    printf("Nhap lua chon:\n"
           "1. Ve hinh chu nhat\n"
           "2. Ve hinh tam giac\n"
           "Lua chon cua ban: ");
    slct = select(slct);
    if (slct == 1) { vehcn(dai, rong); }
    else if (slct == 2) { vetg(cao); }

    getchar();
}
void vetg(int cao) {
    printf("Nhap chieu cao cua tam giac: ");
    scanf("%d", &cao);

    for (int i = 0; i < cao; ++i) {
        for (int j = 0; j <= i; ++j) {
            printf("*");
        }
        printf("\n");
    }
}
void vehcn(int dai, int rong) {
    printf("Nhap chieu dai (doc): ");
    scanf("%d", &dai);
    printf("Nhap chieu rong (ngang): ");
    scanf("%d", &rong);

    for (int i = 0; i < dai; ++i) {
        for (int j = 0; j < rong; ++j) {
            printf("* ");
        }
        printf("\n");
    }
}