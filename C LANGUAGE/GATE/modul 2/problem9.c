# include<stdio.h>
void main()
{
    int num;
    printf("Enter the any number = ");
    scanf("%d",&num);
    for(int i=0; i<num; i++)
    {
        for(int j=0; j<=i; j++)
            printf("*");
        for(int k=0; k<2*((num-1)-i); k++)
            printf(" ");
        for(int j=0; j<=i; j++)
            printf("*");
        printf("\n");
    }
    for(int i=0; i<num; i++)
    {
        for(int j=0; j<num-i; j++)
            printf("*");
        for(int k=0; k<2*i; k++)
            printf(" ");
        for(int j=0; j<num-i; j++)
            printf("*");
        printf("\n");
    }
}