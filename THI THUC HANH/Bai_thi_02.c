//Dang Quang Huy
// Created by huydo on 5/6/2024.
//
#include "stdio.h"

int cyrstalTienDien(int sokWh) {

    //function calculate the bill
    int price;
    if (sokWh <= 50) {
        price = sokWh * 500;
    } else if (sokWh <= 100) {
        price = 50 * 500 + (sokWh - 50) * 700;
    } else {
        price = 50 * 500 + 50 * 700 + (sokWh - 100) * 900;
    }

    return price;
}

int main() {

    //loop input the number of kWh until the number is positive
    int dien;
    do {
        printf("Under 50kWh: 500 VND/kWh\n"
               "From 51 kWh to 100 kWh: 700 VND/kWh\n"
               "From 101 kWh or more: 900 VND/kWh\n"
               "Enter the number of kWh: ");
        scanf("%d", &dien);
        if (dien < 0)
            printf("\nThe value entered is not valid! Please try again.\n\n");
    } while (dien < 0);

    //display the result
    int tiendien = cyrstalTienDien(dien);
    printf("The electricity bill is: %d VND", tiendien);

    getchar();
}