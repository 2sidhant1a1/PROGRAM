#include<stdio.h>
void main()
{
    int num;
    printf("Enter the value = ");
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        for(int j=0; j<num-i-1; j++)
            printf("  ");
        for(int k=0; k<=i; k++)
            printf("* ");
        printf("\n");
    }
    for(int i=0;i<num-1;i++)
    {
        for(int j=0; j<=i; j++)
            printf("  ");
        for(int k=0; k<num-i-1; k++)
            printf("* ");
        printf("\n");
    }

}