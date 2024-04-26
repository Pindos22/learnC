//
// Created by huydo on 4/24/2024.
//Viết một chương trình để tính diện tích và chu vi hình tròn
#include "stdio.h"

#define pi 3.14

float dientich(float r) {
    float S = pi * r * r;
    return S;
}

float chuvi(float r) {
    float C = 2 * pi * r;
    return C;
}

int main() {
    float r, s, c;
    printf("Nhap ban kinh hinh tron: ");
    scanf("%f", &r);

    s = dientich(r);
    c = chuvi(r);
    printf("Dien tich hinh tron la: %.2f\n", s);
    printf("Chu vi hinh tron la: %.2f\n", c);

    getchar();
}