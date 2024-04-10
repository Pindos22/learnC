//
// Created by huydo on 4/10/2024.
//
#include <stdio.h>

int main() {

    int integerVar=10;          // kiểu số nguyên
    printf("Kieu so nguyen: %d\n", integerVar);

    float floatVar=3.14;        // kiểu số thực
    printf("Kieu so thuc: %f\n", floatVar);

    char charV='A';             // kiểu kí tự
    printf("Kieu ki tu: %c\n", charV);

    int boolVar=1;              // kiểu boolean (sử dụng kiểu int)
    // 1 là true, 0 là false
    printf("Kieu Boolean: %d\n", boolVar);

    char stringVar[]="huydopin";// kiểu chuỗi kí tự (các mảng kí tự)
    printf("Kieu chuoi ki tu: %s\n", stringVar);

    return 0;
}