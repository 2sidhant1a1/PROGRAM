/*
WAC program that accepts a string str as input and print each word of the string in new line.
    Input : Hello All Dear Students
    Output : 
    Hello
    All
    Dear
    Students
*/
#include<stdio.h>
int main(){
    char *str;
    scanf("%[^\n]s",str);
    while(*str !='\0')
    {
        if(*str==' ')
            printf("\n");
        else
            printf("%c",*str);
        str++;
    }
    return 0;
}