//
// Created by huydo on 4/26/2024.
//
#include "stdio.h"

char menu();

char select(char s);

void checkSD();

void rut();

void guitien();

float sodu = 0.0;

int main() {
    char slct;
    do {
        slct = menu();
        select(slct);
    } while (slct != 'd' && slct != 'D');
}

char menu() {
    char s;
    printf("========ATM========\n"
           "A. Kiem tra so du\n"
           "B. Rut tien\n"
           "C. Gui tien\n"
           "D. Thoat\n"
           "Lua chon cua ban: ");
    fflush(stdin);
    scanf("%c", &s);
    if (s < 97 && s > 68 || s < 65 || s > 100) {
        printf("Lua chon cua ban khong dung vui long nhap lai!\n");
    }
    return s;
}

char select(char s) {
    switch (s) {
        case 'a':
        case 'A':
            checkSD();
            break;
        case 'b':
        case 'B':
            rut();
            break;
        case 'c':
        case 'C':
            guitien();
            break;
    }
}

void checkSD() {
    printf("So du cua ban hien tai la: %.2f VND\n", sodu);
}

void rut() {
    float tienrut;

    printf("Nhap so tien muon rut (VND): ");
    scanf("%f", &tienrut);

    if (tienrut > 0 && sodu >= tienrut) {
        sodu -= tienrut;
        printf("Rut tien thanh cong. So du moi: %.2f VND\n", sodu);
    } else if (tienrut <= 0) {
        printf("So tien khong hop le!\n");
    } else
        printf("So du khong kha dung!\n");
}

void guitien() {
    float tiengui;

    printf("Nhap so tien can gui (VND): ");
    scanf("%f", &tiengui);

    if (tiengui > 0) {
        sodu += tiengui;
        printf("Gui tien thanh cong. So du moi: %.2f VND\n", sodu);
    } else
        printf("So tien khong hop le!\n");
}