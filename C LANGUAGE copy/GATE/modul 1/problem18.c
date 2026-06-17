# include<stdio.h>
void main()
{
    int num;
    float sum=0.0;
    printf("Enter the  n number = ");
    scanf("%d",&num);
    int i=1;
    while(i<=num)
        sum=sum+(1.0/i++);
    printf("SUM of Series = %f",sum);
}