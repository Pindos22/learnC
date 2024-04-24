//
// Created by huydo on 4/24/2024.
//
#include "stdio.h"

int main() {
    float diem[5][7];
    char name[5][30];
    for (int i = 0; i < 5; ++i) {
        printf("Nhap ten thu %d: ", i + 1);
        fflush(stdin);
        scanf("%[^\n]s", &name[i]);
        diem[i][6] = 0;
        for (int j = 0; j < 6; ++j) {
            printf("Nhap diem mon hoc thu %d: ", j + 1);
            fflush(stdin);
            scanf("%f", &diem[i][j]);
            diem[i][6] += diem[i][j];
        }
        diem[i][6] = diem[i][6] / 6;
    }

    printf("Danh sach ten va diem hoc vien: \n"
           "| Ten                   | Mon hoc 1 | Mon hoc 2 | Mon hoc 3 | Mon hoc 4 | Mon hoc 5 | Mon hoc 6 | Diem TB |\n");
    for (int i = 0; i < 5; ++i) {
        printf("|%23s| %9.2f | %9.2f | %9.2f | %9.2f | %9.2f | %9.2f | %7.2f |\n", name[i], diem[i][0], diem[i][1], diem[i][2], diem[i][3], diem[i][4], diem[i][5], diem[i][6]);
    }

    getchar();
}