/*
Write a program to convert decimal number into Roman number.
        Input: 
        Output:

*/
#include<stdio.h>

// Function to convert decimal number to Roman numeral
void decimalToRoman(int num) {
    // Arrays to store Roman numerals and corresponding decimal values
    int decimal[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    
    printf("Roman numeral: ");
    for (int i = 0; i < 13; i++) {
        while (num >= decimal[i]) {
            printf("%s", roman[i]);
            num -= decimal[i];
        }
    }
    printf("\n");
}

int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    // Check if the number is valid for Roman numerals
    if (num <= 0 || num >= 4000) {
        printf("Roman numerals are only defined for numbers between 1 and 3999.\n");
        return 0;
    }

    decimalToRoman(num); // Call the conversion function
    return 0;
}