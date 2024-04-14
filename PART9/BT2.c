//
// Created by huydo on 4/14/2024.
//
#include "stdio.h"

int main() {
    int num1, num2;

    printf("Nhap vao so thu nhat: ");
    scanf("%d", &num1);

    printf("Nhap vao so thu hai: ");
    scanf("%d", &num2);

    int min, max;
    if (num1 < num2) {
        min = num1;
        max = num2;
    }
    else {
        min = num2;
        max = num1;
    }

    int sum = 0;

    for (int i = min; i <= max; ++i) {
        if (i%2 == 1)
            sum = sum + i;
    }

    printf("Tong cac so le tu %d den %d = %d\n", min, max, sum);

    getchar();
}