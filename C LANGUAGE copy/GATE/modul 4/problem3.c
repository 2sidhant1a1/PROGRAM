/*
Problem Description: Given a string as an input. We need to write a program that will print
     all non-empty substings of that given string.
            Input: abc
            Ouput:
            a
            b
            c
            ab
            bc
            abc
*/
# include<stdio.h>
# include<string.h>
int main()
{
    char str[10];
    gets(str);
    for(int i=0; i<strlen(str); i++)
    {
        for(int j=i; j<strlen(str); j++)
        {
            for(int k=i; k<=j; k++)
            {
                printf("%c",str[k]);
            }
            printf("\n");
        }
    }
    return 0;
}