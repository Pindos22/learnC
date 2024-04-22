//
// Created by huydo on 4/19/2024.
//
#include "stdio.h"
#include "string.h"

int main() {
    char ten[50][50];
    int n;
    char tg[60];
    printf("Nhap nhung cai ten \n");
    printf("Nhap 'end' truoc khi ket thuc\n");
    do {
        printf("Ten thu %d: ", n + 1);
        fflush(stdin);
        scanf(" %[^\n]s", ten[n]);
    } while (strcmp(ten[n++], "end"));
    n = n - 1;

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (strcmp(ten[i], ten[j]) > 0) {
                strcpy(tg, ten[i]);
                strcpy(ten[i], ten[j]);
                strcpy(ten[j], tg);
            }
        }
    }
    fflush(stdin);
    for (int i = 0; i < n; ++i) {
        printf("%s\n", ten[i]);
    }
}