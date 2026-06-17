/*
Write 'c' code that prints the given number is EVEN or ODD without using conditional statements(if else).
        Input : 7
        Output :
        ODD
*/

#include<stdio.h>
void main()
{
    int num;
    printf("Enter the any a number = ");
    scanf("%d",&num);

            // approch 1
    // (num%2)?printf("ODD"):printf("EVEN");

            // approch 2
    (num&1)?printf("ODD"):printf("EVEN");
}