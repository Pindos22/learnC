//
// Created by huydo on 4/14/2024.
//
#include "stdio.h"

int main() {
    int n = 9;
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j < i; ++j) {
            printf("%d", j+1);
        }
        printf("\n");
    }
    getchar();
}