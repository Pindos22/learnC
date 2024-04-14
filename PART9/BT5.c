//
// Created by huydo on 4/14/2024.
//
#include "stdio.h"

int main() {
    int n=75;

    for (int i = n; i > 0; --i) {
        for (int j = 1; j <= i; ++j) {
            printf("*");
        }
        printf("\n");
    }

    getchar();
}