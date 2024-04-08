//
// Created by huydo on 4/8/2024.
//
#include <stdio.h>

int main() {
    int luongcb, DA, HRA, TA, others, tax, PF, IT;
    printf("Nhap luong co ban: $");
    scanf("%d", &luongcb);
    PF = luongcb*0.14;
    IT = luongcb*0.15;
    tax = PF + IT;
    DA = luongcb*0.12;
    printf("Nhap HRA: $");
    scanf("%d", &HRA);
    printf("Nhap TA: $");
    scanf("%d", &TA);
    printf("Nhap cac muc khac: $");
    scanf("%d", &others);
    int luongtl;
    luongtl = luongcb + DA + HRA + TA + others - tax;
    printf("luong thuc lanh la: $ %d", luongtl);
    return 0;
}