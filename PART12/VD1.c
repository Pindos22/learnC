//
// Created by huydo on 4/22/2024.
//
#include "stdio.h"

int main() {
    char arr[26];
    char arr2[26];
    arr[0] = 'A';
    for (int i = 1; i < 26; ++i) {
        arr[i] = arr[i - 1] + 1;
    }
    for (int i = 0; i < 26; ++i) {
        printf("%c ", arr[i]);
    }

    for (int i = 97, j = 0; j < 26; ++i, ++j) {
        arr2[j] = i;
        printf("%c ", arr2[j]);
    }
}