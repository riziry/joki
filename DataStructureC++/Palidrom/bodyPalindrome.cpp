#include <iostream>
#include <string.h>
#include "headerPalindrom.h"

void isPalindrome(char str[]){
    int l = 0; // Start from leftmost and rightmost corners of str
    int h = strlen(str) - 1;

    while(h > l){ // compare characters while they are same or not
        if(str[l++] != str[h--]){
            printf("%s is Not Palindrome\n", str);
            return;
        }
    }
    printf("%s is palindrome\n", str);
}


