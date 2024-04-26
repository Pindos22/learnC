//
// Created by huydo on 4/24/2024.
//viết 1 chương trình in ra giai thừa của 1 số nguyên
#include "stdio.h"
int giaithua(int x) {
    int tich = 1;
    for (int i = 1; i <= x; ++i) {
        tich = tich * i;
    }
    return tich;
}
int main() {
    int a, S;
    printf("Nhap so can tinh: ");
    scanf("%d", &a);

    S = giaithua(a);
    printf("Giai thua cua so vua nhap la: %d", S);

    getchar();
}