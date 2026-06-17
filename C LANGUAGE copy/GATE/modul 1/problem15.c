# include<stdio.h>
int value(int pnum)
{
    int power=1;
    for(int i=1; i<=pnum;i++)
        power=power*8;
    return power;

}
void main()
{
    int num, sum=0,power=0;
    printf("Enter the Octal Number = ");
    scanf("%d",&num);
    while(num!=0)
    {
        int rem = num%10;
        sum = sum + rem * value(power++);
        num=num/10;
    }
    printf("Decimal Number = %d",sum);
}