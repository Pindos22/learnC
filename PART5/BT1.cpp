//
// Created by huydo on 4/12/2024.
//
#include "stdio.h"

int main() {
    int s, m = 3, n = 5, r, t;
    float x=3.0, y;

    t = n/m;
    printf("%d\n", t);

    r = n%m;
    printf("%d\n", r);

    y = n/m;
    printf("%f\n", y);

    t = (x*y)-(m/2);
    printf("%d\n", t);

    x = x*2.0;
    printf("%f\n", x);

    s = (m+n)/r;
    printf("%d", s);

    y = --n;
    printf("%f", y);

    getchar();
}