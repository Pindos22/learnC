//
// Created by huydo on 4/22/2024.
//
#include "stdio.h"

int main() {
    char ten[5][30];
    for (int i = 0; i < 5; ++i) {
        printf("Hoc vien so %d: ", i + 1);
        fflush(stdin);
        scanf("%[^\n]s", &ten[i]);
    }

    printf("\nDanh sach ten hoc vien: ");
    for (int i = 0; i < 5; ++i) {
        printf("\n%d. %s", i + 1, ten[i]);
    }

    getchar();
}