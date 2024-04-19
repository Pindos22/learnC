//
// Created by huydo on 4/19/2024.
//
#include "stdio.h"

int main() {
    int n;
    nhap:
    {
        do {
            printf("Nhap mot so tu 1 - 9: ");
            scanf("%d", &n);
        } while (n < 1 || n > 9);
    }
    for (int i = 1; i < 10; ++i) {
        printf("\n%d x %d = %d", n, i, n*i);
    }

    char s;
    printf("\nBan co muon tiep tuc khong? Y/N:");
    scanf(" %c", &s);
    fflush(stdin);
    if (s == 'y' || s == 'Y') {
        goto nhap;
    }

    getchar();
}