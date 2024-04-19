//
// Created by huydo on 4/19/2024.
//
#include "stdio.h"

int main() {
    for (int i = 1; i <= 100; ++i) {
        if (i % 2 == 0) {
            printf(" %d", i);
        }
    }

    getchar();
}