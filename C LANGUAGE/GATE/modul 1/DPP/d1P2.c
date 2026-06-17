#include<stdio.h>
void main()
{
    int num,sum=0;
    printf("Enter any positive number = ");
    scanf("%d",&num);
    for(int i=1; i<num; i++)
    {
        if(num%i==0)
            sum +=i;
    }
    if(sum<num)
        printf("%d is a deficient number.",num);
    else
        printf("%d is not a deficient number.",num);
}