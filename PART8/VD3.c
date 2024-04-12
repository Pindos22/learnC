//
// Created by huydo on 4/12/2024.
//
#include "stdio.h"

int main() {

    float weight, height;

    printf("Nhap can nang(kg): ");
    scanf("%f", &weight);

    printf("Nhap chieu cao(m): ");
    scanf("%f", &height);

    float bmi = weight / (height*height);

    printf("Chi so BMI cua ban la: %.2f\n", bmi);

    if (bmi < 18.5) {
        printf("Ban qua Nghien");
    } else if (bmi < 24.9) {
        printf("Trong ban cung OK day");
    } else if (bmi < 29.9) {
        printf("Trong ban hoi thua can");
    } else
        printf("Ban dang trong trang thai beo phi");
    getchar();
}