//
// Created by huydo on 4/22/2024.
//
#include "stdio.h"
#include "conio.h"
#include "string.h"

int main() {
    char a[100];
    printf("Nhap cau can kiem tra: ");
    fgets(a, sizeof a, stdin);

    int length = strlen(a);
    int na = 0;
    int pa = 0;
    for (int i = 0; i < length; ++i) {
        if (a[i] >= 97 && a[i] <= 122) {
            if (a[i] == 'a' ||
                a[i] == 'e' ||
                a[i] == 'i' ||
                a[i] == 'o' ||
                a[i] == 'u') {
                na ++;
            } else {
                pa ++;
            }
        } else if (a[i] >= 64 && a[i] <= 90) {
            if (a[i] == 'A' ||
                a[i] == 'E' ||
                a[i] == 'I' ||
                a[i] == 'O' ||
                a[i] == 'U') {
                na ++;
            } else {
                pa ++;
            }
        }
    }

    printf("\nTong so nguyen am: %d", na);
    printf("\nTong so phu am: %d", pa);

    getchar();
}