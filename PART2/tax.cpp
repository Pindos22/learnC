//
// Created by huydo on 4/10/2024.
//
#include <stdio.h>

int main() {

    char name[50];                  //nhập tên từ người dùng
    printf("Nhap ten cua ban: ");
    scanf("%[^\n]s", name);

    float hrs;                      //nhập số gờ làm
    printf("Nhap so gio lam viec: ");
    scanf("%f", &hrs);

    float hrlyRate;                 //nhập giá mỗi giờ
    printf("Nhap gia moi gio lam viec(vnd): ");
    scanf("%f", &hrlyRate);

    //Tính tổng tiền lương
    float totalPay = hrs * hrlyRate;

    //Áp thuế
    float tax = totalPay * 0.1;
    float netPay = totalPay - tax;

    //In kết quả
    printf("\nCam on ban %s da cong tac cung chung ta.\n", name);
    printf("Sau day la so tien luong ban nhan duoc: \n\n");
    printf("Tong tien luong truoc thue: %.2f vnd\n", totalPay);
    printf("Tong tien thue(10%): %.2f vnd\n", tax);
    printf("Tien luong sau thue: %.2f vnd\n", netPay);

    return 0;
}