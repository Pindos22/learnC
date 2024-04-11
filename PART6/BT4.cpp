//
// Created by huydo on 4/12/2024.
//
#include "stdio.h"

int main(){

    char name[50];
    float basic, daper, bonper, loandet, total;

    printf("\nNhap ten cua ban: ");
    fgets(name, sizeof name, stdin);

    printf("Nhap luong co ban: $");
    scanf("%f", &basic);

    printf("Nhap phan tram cua DA: %");
    scanf("%f", &daper);

    printf("Nhap phan tram loi tuc: %");
    scanf("%f", &bonper);

    printf("Nhap tien vay bi khau tru: $");
    scanf("%f", &loandet);

    float salary = basic + basic * daper / 100 + basic * bonper / 100 - loandet;
    printf("\nTen: %s"
           "Luong tong: $ %.2f\n",name, salary);
    getchar();
}