//
// Created by huydo on 4/8/2024.
//
#include <stdio.h>

int main() {
    int t, v, en, dt;
    printf("Nhap diem toan: ");
    scanf("%d", &t);
    printf("Nhap diem van: ");
    scanf("%d", &v);
    printf("Nhap diem anh: ");
    scanf("%d", &en);
    dt = t*2 + v*2 +en;
    printf("Diem tong la: %d\n", dt);
    if (dt >= 30) {
        printf("DAT");
    }
    else {
        printf("KHONG DAT");
    }
    return 0;
}