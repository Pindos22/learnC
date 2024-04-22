//
// Created by huydo on 4/22/2024.
//
#include "stdio.h"

int main() {
    char a[100];
    int i = 0;
    int na = 0;
    int pa = 0;
    pr

    while(a[i++] != '\0') {
        if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' )
            na++;
        else
            pa++;
    }

    printf("Chuoi: '%s' \nCo chua: %d nguyen am va %d phu am.", a, na, pa);

    return 0;
}