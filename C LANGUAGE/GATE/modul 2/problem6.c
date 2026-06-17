#include<stdio.h>
void main()
{
    int num;
    char symbol;
    printf("Enter the value = ");
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        for(int j=0; j<num-(i-1); j++)
            printf(" ");
        for(int k=0; k<=i; k++)
            printf("*");
        printf("\n");
    }
}