//
// Created by huydo on 4/10/2024.
//
#include <stdio.h>
#include <stdlib.h>

int main() {

    char name[50];              //Nhap ten nguoi dung
    printf("Nhap ten cua ban: ");
    fgets(name, sizeof(name), stdin);

    int birth;                  //Nhap nam sinh
    printf("Nhap nam sinh: ");
    scanf("%d", &birth);

    int currentYear=2024;       //Tinh tuoi
    int age = currentYear - birth;

    if (age<0) {
        printf("Xin loi ban da nhap sai tuoi!\n");
        do {
            //Loop nhap nam sinh
            printf("Nhap nam sinh: ");
            scanf("%d", &birth);
            age = currentYear - birth;
        } while (age<0);
    } else if (age<=18) {
        printf("Ban la mot nguoi tre tuoi\n");
    } else if (age>18 && age<=60) {
        printf("Ban la mot nguoi truong thanh\n");
    } else if (age>60) {
        printf("Ban la mot nguoi lon tuoi\n");
    }

    //In thong tin
    printf("\nXin chao, %s", name);
    printf("Ban %d tuoi.\n", age);

    return 0;
}