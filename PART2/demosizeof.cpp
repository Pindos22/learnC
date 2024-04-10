//
// Created by huydo on 4/10/2024.
//
#include <stdio.h>

int main() {
    float r, c, s, pi=3.14;
    printf("Nhap ban kinh hinh tron(m): ");
    scanf("%f", &r);
    c = 2*pi*r;
    s = pi*r*r;
    printf("\n\nKet qua chu vi va dien tich hinh tron: \n");
    printf("Ban kinh hinh tron: R = %.2f met \n", r);
    printf("Chu vi hinh tron: C = %.2f met \n", c);
    printf("Dien tich hinh tron: S = %.2f met vuong \n", s);
    printf("\n\n");
    printf("Data Type           \t | Size of byte \n");
    printf("int                 \t | %d byte \n", sizeof (int));
    printf("float               \t | %d byte \n", sizeof (float));
    printf("unsigned int        \t | %d byte \n", sizeof (unsigned int));
    printf("short int           \t | %d byte \n", sizeof (short int));
    printf("long int            \t | %d byte \n", sizeof (long int));
    printf("double              \t | %d byte \n", sizeof (double));

    return 0;
}