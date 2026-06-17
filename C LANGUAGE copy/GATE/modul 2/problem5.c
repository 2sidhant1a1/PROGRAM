#include<stdio.h>
void main()
{
    int num;
    char symbol;
    printf("Enter the value = ");
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        for(int k=0; k<num-i; k++)
            printf("* ");
        printf("\n");
    }
}