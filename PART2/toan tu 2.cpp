//
// Created by huydo on 4/10/2024.
//
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Nhap so a: ");
    scanf("%d", &a);
    printf("Nhap so b: ");
    scanf("%d", &b);
    printf("Nhap so c: ");
    scanf("%d", &c);

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    //Tong hop tat ca cac loai toan tu
    printf("Bieu thuc vi du la: a + b > c va a khac b\n");
    printf("Ket qua bieu thuc (%d + %d > %d va %d khac %d)\n", a, b, c, a, b);
    int ketqua = (a + b) > c && a != b;
    printf("Ket qua: %d\n", ketqua);

    printf("Bieu thuc vi du la: a + b > c hoac a khac b\n");
    printf("Ket qua bieu thuc (%d + %d > %d hoac %d khac %d)\n", a, b, c, a, b);
    int ketqua1 = (a + b) > c || a != b;
    printf("Ket qua: %d\n", ketqua1);

    return 0;
}