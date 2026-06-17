#include<stdio.h>
void main()
{
    int num;
    char sym;
    printf("Enter the value = ");
    scanf("%d",&num);
    printf("Enter the symbol = ");
    scanf("%c",&sym);
    for(int i=0; i<num; i++)
    {
        for(int j=0; j<=i; j++)
            printf("%c ",sym);
        printf("\n");
    }
}