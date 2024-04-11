//
// Created by huydo on 4/12/2024.
//
#include "stdio.h"

int main() {

    int sum;
    printf("Nhap gia tri so nguyen sum: ");
    scanf("%d", &sum);
    printf("Gia tri so nguyen sum = %d\n", sum);

    char a[20]="Welcome";
    printf("\n%s\n", a);

    char letter;
    printf("\nNhap ki tu: ");
    scanf("%s", &letter);
    printf("\nKi tu: %c\n", letter);

    float discount;
    printf("\nNhap gia tri discount: ");
    scanf("%f", &discount);
    printf("\nGia tri discount = %f\n", discount);

    float dumb;
    printf("\nNhap gia tri dumb: ");
    scanf("%f", &dumb);
    printf("\nGia tri dumb = %.2f\n", dumb);

    printf("\nNhap gia tri thuc cho sum: ");
    float sum1;
    scanf("%f", &sum1);
    printf("\nGia tri sum = %f\n", sum1);

    printf("\nNhap gia tri thuc cho discount rate: ");
    float discount_rate;
    scanf("%f", &discount_rate);
    printf("\nGia tri cua discount rate = %f", discount_rate);

    getchar();
}