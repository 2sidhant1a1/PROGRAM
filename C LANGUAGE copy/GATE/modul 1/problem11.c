/*
Write 'C' code that find out the giben number is Happy Number or Not.
A number for which the sum of the squares of the digits eventually equals 1 is a Happy Number.
    Input : 302
    Output :
        Happy Number
*/

#include<stdio.h>
void main()
{
    int num,sum;
    printf("Enter the any number = ");
    scanf("%d",&num);
    int value = num;
    while(num>=9)
    {
        sum=0;
        while(num!=0)
        {
            int temp = num % 10;
            sum = sum + temp*temp;
            num = num/10;
        }
        num=sum;
    }
    if(sum==1)
        printf("%d is Happy number.",value);
    else
        printf("%d is not Happy number.",value);
}