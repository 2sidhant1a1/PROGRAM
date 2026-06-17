/*
Problem Description : A Palindrome Number is one. reverse of which is equal to the same number.

Write 'C' code that prints the All Palindromes up to giben Limit.limit.
    Input : 100
    Output :
    0,1,2,3,4,5,6,7,8,9,11,22,33,44,55,66,77,88,99
*/

# include<stdio.h>
void main()
{
     int last;
    printf("Enter the number = ");
    scanf("%d",&last);
    for(int num=0; num<=last; num++)
    {
        int mun=0;
        int temp=num;
        while(temp!=0)
        {
            int remainder = temp%10;
            mun=mun*10+remainder;
            temp=temp/10; 
        }
        if(num==mun)
            printf("\t %d",num);
    }
}