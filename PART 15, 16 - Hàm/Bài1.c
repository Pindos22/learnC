//
// Created by huydo on 4/24/2024.
//
#include "stdio.h"

int binhphuong(int a){
    int b2;
    b2 = a * a;
    return b2;
}

int main(){
    int x, squr;
    printf("Nhap 1 so bat ky: ");
    scanf("%d", &x);

    squr = binhphuong(x);
    printf("%d", squr);

    getchar();
}