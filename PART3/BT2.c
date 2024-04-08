//
// Created by huydo on 4/8/2024.
//
#include <stdio.h>

int main() {
    int luong, tuoi;
    char ten[50];
    printf("Nhap ten: ");
    fgets(ten, sizeof(ten), stdin);
    printf("Nhap tuoi: ");
    scanf("%d", &tuoi);
    printf("Nhap luong(vnd): ");
    scanf("%d", &luong);
    printf("Ten: ");
    puts(ten);
    printf("Tuoi: %d\n", tuoi);
    printf("Luong: %d vnd\n", luong);
    return 0;
}