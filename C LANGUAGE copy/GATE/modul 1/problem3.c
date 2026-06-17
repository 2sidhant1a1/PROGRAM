/*
WAC program that accepts a string str as input and print each word of the string in step Format.
    Input : Hello All Dear Students
    Output : 
        Helll
             All
                Dear
                    Students
    
*/
#include<stdio.h>
int main()
{
    int p=0;
    char *str;
    scanf("%[^\n]s", str);
    while(*str!='\0')
    {
        if(*str!=' ')
        {
            printf("%c", *str);
            p++;
        }
        else
        {
            printf("\n");
            int k=1;
            while(k<p)
            {
                printf(" ");
            }
        }
        str++;       
    }
    return 0;
}