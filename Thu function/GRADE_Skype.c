//
// Created by huydo on 4/26/2024.
//
#include "stdio.h"

int menu();

char grade(int a);

int main() {
    int diem;
    do {
        diem = menu();
    } while (diem < 0 || diem > 100);

    char hang = grade(diem);
    printf("Hang: %c", hang);
    getchar();
}

int menu() {
    int a;
    printf("========GRADE========\n"
           "Diem >= 90 ==> Hang: A\n"
           "Diem >= 80 ==> Hang: B\n"
           "Diem >= 70 ==> Hang: C\n"
           "Diem >= 60 ==> Hang: D\n"
           "Diem < 60 ==> Hang: F\n"
           "Nhap diem: ");
    fflush(stdin);
    scanf("%d", &a);
    if (a < 0 || a > 100)
        printf("Diem nhap vao khong hop le!\n");
    return a;
}

char grade(int a) {
    char b;
    if (a >= 90)
        b = 'A';
    else if (a >= 80)
        b = 'B';
    else if (a >= 70)
        b = 'C';
    else if (a >= 60)
        b = 'D';
    else if (a < 60)
        b = 'F';

    return b;
}