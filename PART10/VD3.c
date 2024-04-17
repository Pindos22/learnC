//
// Created by huydo on 4/17/2024.
//
#include "stdio.h"

int main() {
    printf("DEMO for()\n");
    for (int i = 0; i < 10; ++i) {
        printf("i = %d\n", i);
    }

    printf("DEMO while()\n");
    int i = 0;
    while (i < 10) {
        printf("i = %d\n", i);
        i++;
    }

    printf("DEMO do ... while()\n");
    i = 0;
    do {
        printf("i = %d\n", i);
        i++;
    } while (i < 10);

    getchar();
}