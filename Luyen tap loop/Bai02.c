//
// Created by huydo on 4/19/2024.
//
#include "stdio.h"

int main() {
    int a, s = 10, chs;
    printf("Nhap so nguyen duong:");
    scanf("%d", &a);

    for(;a!=0;){
        chs = a % 10;
        s += chs;
        a /= 10;
    }

    printf("Tong cac chu so cua so vua nhap la %d", s);
    getchar();
}