//
// Created by huydo on 4/19/2024.
//
#include "string.h"
#include "stdio.h"

int main() {
    char chuoi[500];
    int s = 0;
    printf("Nhap chuoi van ban:");
    scanf("%[^\n]s", chuoi);
    for (int i = 0; i < 500; ++i) {
        if (chuoi[i] == 'a' || chuoi[i] == 'e' || chuoi[i] == 'i' || chuoi[i] == 'o' || chuoi[i] == 'u') {
            s += 1;
        }
    }
    printf("So ky tu nguyen am trong chuoi la: %d", s);
    getchar();
}