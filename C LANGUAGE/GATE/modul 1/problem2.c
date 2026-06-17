/*
WAC program that accepts a string str as input and print each word of the string except the last character.
    Input : Hello All Dear Students
    Output : 
        Hell Al Dea Student
    
*/
#include<Stdio.h>
int main()
{
    char *str;
    scanf("%[^\n]s",str);
    while(*str!='\0')
    {
        if((*(str+1)!=' ') && (*(str+1)!='\0'))
            printf("%c",*str);
        str++;
    }
    return 0;
}