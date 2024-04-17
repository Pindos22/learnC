//
// Created by huydo on 4/17/2024.
//
#include "stdio.h"

int main()
{
    int i, j , max;
    printf("Please enter the maximum value \n");
    printf("for which a table can be printed: ");
    scanf("%d", &max);
    for(i = 0 , j = max ; i <=max ; i++, j--)
        printf("%d+ %d = %d\n", i, j, i + j);
}