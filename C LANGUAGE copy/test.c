#include <stdio.h>

int gray(int num) {
    if (num / 10 == 0) {
        printf("%d", num);
        return num;
    } else {
        int previous = gray(num / 10);
        int current = num % 10;
        int result = previous ^ current;
        printf("%d", result);
        return result;
    }
}

void main() {
    int bnum;
    printf("Enter the Binary Number = ");
    scanf("%d", &bnum);
    printf("Gray Number = ");
    gray(bnum);
    printf("\n");
}
