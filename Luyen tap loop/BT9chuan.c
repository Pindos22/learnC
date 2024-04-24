//
// Created by huydo on 4/24/2024.
//
#include "stdio.h"
#include "time.h"
#include "stdlib.h"
#include "stdbool.h"

int main () {
    srand(time(NULL));  //set thoi gian
    int arr[20];    //tạo mảng giá trị
    int i = 0;      //tạo biến chạy
    int rd=0;
    while (i < 20) {
        int rd = rand() % 200;
//        printf("%d\t%d", rd, i);
        int prm = 1;
        if (rd < 2) {
            prm = 0;
        } else if (rd == 2) {
            prm = 1;
        } else {
            for (int j = 2; j*j < rd; ++j) {
                if (rd % j == 0) {
                    prm = 0;
                    break;
                }
            }
        }
        if (prm == 1){
            arr[i] = rd;
            i++;
        }
    }

    printf("Cac so nguyen to ngau nhien < 200 la:\n");
    for (int i = 0; i < 20; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    getchar();
}