//
// Created by huydo on 4/8/2024.
//
#include <stdio.h>

int main() {
    int a, b, c, s;
    do {
        printf("Nhap chieu dai hcn: ");
        scanf("%d", &a);
        printf("Nhap chieu rong hcn: ");
        scanf("%d", &b);
        if (a < b) {
            printf("Chieu dai phai lon hon chieu rong!\n");
        }
    } while (a<=b);
    c = (a+b)*2;
    s = a*b;
    printf("Chu vi hcn la: %d\n", c);
    printf("Dien tich hcn la: %d\n", s);
    return 0;
}