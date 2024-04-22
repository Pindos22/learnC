//
// Created by huydo on 4/22/2024.
//
#include "stdio.h"

int main() {
    int a[10];

    for (int i = 0; i < 10; ++i) {
        printf("Nhap so thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    int max = a[0];
    int min = a[0];
    for (int i = 0; i < 10; ++i) {
        if (a[i] >= max) {
            max = a[i];
        }
        if (a[i] <= min) {
            min = a[i];
        }
    }

    int mincount = 0;
    int maxcount = 0;
    for (int i = 0; i < 10; ++i) {
        if (a[i] == max) { maxcount++; }
        if (a[i] == min) { mincount++; }
    }

    printf("\nGia tri lon nhat la: %d xuat hien %d lan", max, maxcount);
    printf("\nGia tri nho nhat la: %d xuat hien %d lan", min, mincount);

    float sum = 0;
    float avr;
    for (int i = 0; i < 10; ++i) {
        sum += a[i];
    }
    avr = sum / 10;

    printf("\nTong cac so la: %.0f", sum);
    printf("\n Trung binh cong cac so la: %.2f", avr);

    getchar();
}