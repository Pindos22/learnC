//
// Created by huydo on 4/22/2024.
//
#include "stdio.h"

int main() {
    char a[100];
    printf("Nhap cau muon kiem tra: ");
    fflush(stdin);
    scanf("%[^\n]s", &a);

    int na = 0;
    int pa = 0;
    for (int i = 0; i < 100; ++i) {
        /*if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u') {
            na ++;
        }*/
        printf("%c", a[i]);
    }

//    printf("Van ban co %d nguyen am va %d phu am", na, pa);
    getchar();
}