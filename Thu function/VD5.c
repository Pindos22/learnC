//
// Created by huydo on 4/26/2024.
//
#include "stdio.h"
#include "time.h"
#include "stdlib.h"

int perform(int a, int b, char c) {
    int result;
    switch (c) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        default:
            printf("Ky tu khong dung!");
            result = 0;
    }
    return result;
}

int main() {
    srand(time(NULL));
    int a = rand() & 100;
    int b = rand() % 100;
    char c;
    printf("Nhap phep tinh (+, -, *, /): ");
    scanf("%c", &c);

    int result = perform(a, b, c);
    printf("%d %c %d = %d",a ,c, b, result);

    getchar();
}