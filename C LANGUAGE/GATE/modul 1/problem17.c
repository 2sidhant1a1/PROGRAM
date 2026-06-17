#include<stdio.h>
int gray(int num)
{
    if(num/10==0)
    {
        printf("%d",num);
        return num;
    }
    else
    {
        int G=gray(num/10);
        printf("%d",G ^ (num%10));
        return G;
    }
}
void main()
{
    int bnum;
    printf("Enter the Binary Number = ");
    scanf("%d",&bnum);
    printf("Gray code = ");
    gray(bnum);
}