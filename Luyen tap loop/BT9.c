//
// Created by huydo on 4/24/2024.
//
#include "stdio.h"
#include "time.h"
#include "stdlib.h"
#include "stdbool.h"

int main () {
    srand(time(NULL));
    int arr[20];

    for (int i = 0; i < 20; ++i) {
        int rd = rand() % 200;
        bool prm = true;
        if (rd < 2) {
            prm = false;
        } else if (rd == 2) {
            prm = true;
        } else {
            for (int j = 2; j*j < rd; ++j) {
                if (rd % j == 0) {
                    prm = false;
                    break;
                }
            }
        }
        if (prm){
            arr[i] = rd;
        }
    }

    printf("Cac so nguyen to ngau nhien < 200 la:\n");
    for (int i = 0; i < 20; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    getchar();
}