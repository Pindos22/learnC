//
// Created by huydo on 4/14/2024.
//
#include "stdio.h"

int main() {
    int n=5;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            printf("%d", j);
        }
        printf("\n");
    }

    printf("\n");

    for (int i = n; i > 0; --i) {
        for (int j = 1; j <= i; ++j) {
            printf("%d", j);
        }
        printf("\n");
    }

    getchar();
}