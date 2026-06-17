/*
Problem Description: A Perfect Number is one. sumof whose divisors(except itself) equal to the same number.

Write 'C' code that prints the given vumber. N is perfect or Not.
    Input : 28
    Output :
        PERFECT
*/

# include<Stdio.h>
#include<stdlib.h>
// void main()
// {
//     int p=0,num;
//     printf("Enter the any a number = ");
//     scanf("%d",&num);
//     for(int i=1; i<=num/2; i++)
//     {
//         if(num%i==0)
//             p=p+i;
//     }
//     if(p==num)
//         printf("PERFECT");
//     else
//         printf("NOT PERFECT");

// }


            // Extract and print all perfect number upto given N value.

void main()
{
    long int num=1,last;
    printf("Enter the any a number = ");
    scanf("%ld",&last);
    printf("\nyou perfect number are :-\n");
    while(num<=last)
    {
        int p=0;
        for(int i=1; i<=num/2; i++)
        {
            if(num%i==0)
                p=p+i;
        }
        if(p==num)
            printf("\t%ld",num);
        num++;
    }

}