/*
Problem Description: A Triangular Number is the one with which a triangle can formed.

Write 'C' code that prints the given number. N is Triangular Number or Not.
    Input : 10
    Output :
        YES
*/

# include<Stdio.h>
#include<stdlib.h>
void main()
{
    printf("Enter the any a number = ");
    int tri,num=0,i=1;
    scanf("%d",&tri);
    while(num<=tri)
    {
        num=num+i;
        if(num==tri)
        {
            printf("Yes");
            exit(0);
        }
        i++;
    }
    printf("No");
}