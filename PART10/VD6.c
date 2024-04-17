//
// Created by huydo on 4/17/2024.
//
#include "stdio.h"

int main() {
    int count = 0;
    float total = 0;
    char slct, sbjct[50];
    float diem;

    nhap:
    {
        printf("Nhap ten mon hoc: ");
        fgets(sbjct, sizeof sbjct, stdin);
        printf("Nhap diem cua mon hoc: ");
        scanf("%f", &diem);
        total = total + diem;
        count++;
    };
    printf("Ban co muon tien tuc khong? (Y/N):");
    scanf(" %c", slct);
    fflush(stdin);
    fflush(stdin);

    if (slct == 'y' || slct == 'Y') goto nhap;

    if (count > 0) {
        double avrg = total/count;
        printf("Diem trung binh cua ban la: %.2f\n", avrg);
    } else
        printf("Khong co mon hoc nao duoc nhap\n");

    getchar();
}