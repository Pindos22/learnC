//Dang Quang Huy
// Created by huydo on 5/6/2024.
//
#include "stdio.h"

int findSmallest(int n, int a[]);

int main() {
    //input the number of elements
    int n;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);

    //input array
    int arr[n];
    for (int i = 0; i < n; ++i) {
        printf("Enter the %d number: ", i);
        scanf("%d", &arr[i]);
    }

    //display result
    int result = findSmallest(n, arr);
    printf("\nThe smallest number in the array is: %d", result);

    getchar();
}

int findSmallest(int n, int a[]) {

    //funtion to find the smallest
    int sml = a[0];
    for (int i = 1; i < n; ++i) {
        if (a[i] <= sml) { sml = a[i]; }
    }

    return sml;
}