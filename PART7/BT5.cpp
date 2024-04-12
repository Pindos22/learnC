//
// Created by huydo on 4/12/2024.
//
#include "stdio.h"

int main() {
    int diem;

    do {
        printf("NHAP DIEM CUA SINH VIEN: ");
        scanf("%d", &diem);
    } while (diem<0 || diem>100);

    int slct;
    if (diem>=75) {
        printf("Sinh vien dat loai A!");
    } else if (diem>=60 && diem<75) {
        printf("Sinh vien dat loai B");
    } else if (diem>=45 && diem<60) {
        printf("Sinh vien dat loai C");
    } else if (diem>=35 && diem<45) {
        printf("Sinh vien dat loai D");
    } else printf("Sinh vien dat loai E");

    getchar();
}