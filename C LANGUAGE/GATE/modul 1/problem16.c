# include<stdio.h>
int power(int in)
{
    int p=1;
    for(int i=1; i<=in; i++)
        p=p*2;
    return p;
}
void main()
{
    long int num,octal[10]={0},k=9;
    printf("Enter the Binary Number = ");
    scanf("%d",&num);
    while(num!=0)
    {
        int sum=0;
        int rem=num%10;
        for(int i=0; i<3; i++)
        {
            sum=sum+rem*power(i);
            num=num/10; 
        }
        octal[k--]=sum;
    }
    printf("octal Number = ");
    for(int i=0; i<10; i++)
    {
        printf("%d",octal[i]);
    }
}