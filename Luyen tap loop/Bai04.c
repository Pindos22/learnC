//
// Created by huydo on 4/19/2024.
//
#include "stdio.h"

int main() {
    char s;

    do {
        printf("Nhap vao mot ky tu:");
        scanf("%c", &s);
        fflush(stdin);
        if (s >= 65 && s <= 90 || s >= 97 && s <= 122) {
            printf("Ky tu vua nhap la chu cai!\n");
        } else if (s >= 48 && s <= 57) {
            printf("Ky tu vua nhap la chu so!\n");
        } else {
            printf("Ky tu vua nhap la ky tu dac biet!\n");
        }
    } while (s != ' ');

}