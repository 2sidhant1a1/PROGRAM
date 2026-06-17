/*
Problem Description: Given a string in roman form, the task is to convert this given roman string into an integer.
        Input: IX
        Output:
        9
*/
#include <stdio.h>
#include <string.h>

int value(char ch) {
    switch(ch) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return -1;
    }
}

int main() {
    char str[100];
    printf("Enter Roman numeral: ");
    scanf("%s", str);
    int n = strlen(str);
    int sum = 0;

    for (int i = 0; i < n; i++) {
        int curr = value(str[i]);
        int next = (i + 1 < n) ? value(str[i + 1]) : 0;

        if (curr < next) {
            sum -= curr;  // Subtract if smaller value comes before larger
        } else {
            sum += curr;  // Otherwise, add the value
        }
    }

    printf("Integer value: %d\n", sum);
    return 0;
}