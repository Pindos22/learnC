//
// Created by huydo on 4/12/2024.
//
#include "stdio.h"

int main() {

    char slct;
    printf("Nhap ky tu: ");
    scanf("%s", &slct);

    switch (slct) {
        case 65:
        case 97:
        {
            printf("Ada");
            break;
        }
        case 66:
        case 98:
        {
            printf("Basic");
            break;
        }
        case 67:
        case 99:
        {
            printf("COBOL");
            break;
        }
        case 68:
        case 100:
        {
            printf("dBASE III");
            break;
        }
        case 70:
        case 102:
        {
            printf("Fortran");
            break;
        }
        case 80:
        case 112:
        {
            printf("Pascal");
            break;
        }
        case 86:
        case 118:
        {
            printf("VisualC++");
            break;
        }
        default:
            printf("Ngon ngu chua duoc cap nhat");
    }
    getchar();
}