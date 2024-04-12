//
// Created by huydo on 4/12/2024.
//
#include "stdio.h"

int main() {
    int productcode;
    float orderamount, rate = 0.0;
    printf("\nPlease enter the product code: ");
    scanf("%d", &productcode);
    printf("Please enter the order amount: ");
    scanf("%f", &orderamount);

    if (productcode == 1) {
        if (orderamount >= 500)
            rate = 0.12;
        else if (orderamount >= 300)
            rate = 0.08;
        else
            rate = 0.02;
    } else if (productcode == 2) {
        if (orderamount >= 2000)
            rate = 0.1;
        else if (orderamount >= 1500)
            rate = 0.05;
    } else if (productcode == 3) {
        if (orderamount >= 5000)
            rate = 0.1;
        else if (orderamount >= 2500)
            rate = 0.05;
    }
    orderamount -= orderamount * rate;
    printf("The next order amount is %.2f \n", orderamount);

    getchar();
}