#include<Stdio.h>
int octal(int num)
{
    if(num<8)
        printf("%d",num);
    else
    {
        octal(num/8);
        printf("%d",num%8);
    }
}
void main()
{
    int num,arr[15],i=0;
    printf("Enter the decimal number = ");
    scanf("%d",&num);
    printf("octal number = ");
    octal(num); 
}