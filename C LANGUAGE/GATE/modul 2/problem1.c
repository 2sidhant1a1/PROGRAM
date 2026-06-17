#include<stdio.h>
void main()
{
    int num;
    char c;
    printf("Enter the value = ");
    scanf("%d",&num);
    printf("Enter the symbol = ");
    scanf("%c",&c);
    for(int i=1; i<=num; i++)
    {
        for(int j=1; j<=num; j++)
            printf("%c ",(c+j));
        printf("\n");
    }
}