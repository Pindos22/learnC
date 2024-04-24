//
// Created by huydo on 4/22/2024.
//
#include "stdio.h"
#include "string.h"

int main() {
    char kytu[10];
    printf("Nhap toi da 10 ky tu (nhap Enter de ket thuc): ");
    for (int i = 0; i < 10; ++i) {
        char c = getchar();
        if (c == '\n') { break; }
        kytu[i] = c;
    }

    printf("Danh sach ky tu da nhap va ma ASCII tuong ung: \n");
    for (int i = 0; i < 10; ++i) {
        printf("%c : %d\n", kytu[i], kytu[i]);
    }

    getchar();
}