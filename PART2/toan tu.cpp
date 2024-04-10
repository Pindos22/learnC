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

    //Toan tu toan hoc
    int tong = a + b;
    int hieu = a - b;
    int tich = a * b;
    int thuong = a / b;

    //Toan tu quan he
    int ketqua1 = (a>b);
    int ketqua2 = (a<=b);
    int ketqua3 = (a==b);
    int ketqua4 = (a!=b);

    //Toan tu logic
    int ketqua5 = (a<b && b>c);
    int ketqua6 = (a<b || b<c);
    int ketqua7 = !(a<b);

    printf("Tong: %d \n", tong);
    printf("Hieu: %d \n", hieu);
    printf("Thuong: %d \n", thuong);
    printf("Tich: %d \n", tich);

    printf("Ket qua 1: %d \n", ketqua1);
    printf("Ket qua 2: %d \n", ketqua2);
    printf("Ket qua 3: %d \n", ketqua3);
    printf("Ket qua 4: %d \n", ketqua4);
    printf("Ket qua 5: %d \n", ketqua5);
    printf("Ket qua 6: %d \n", ketqua6);
    printf("Ket qua 7: %d \n", ketqua7);

    return 0;
}