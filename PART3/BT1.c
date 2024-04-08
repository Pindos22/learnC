//
// Created by huydo on 4/8/2024.
//

#include <stdio.h>

int main() {
    float r, c, s, pi;
    pi = 3.14;
    printf("nhap ban kinh hinh tron: ");
    scanf("%f", &r);
    c = 2*pi*r;
    s = pi*r*r;
    printf("Chu vi hinh tron la: %0.2f\n", c);
    printf("Dien tich hinh tron la: %0.2f\n", s);
    return 0;
}