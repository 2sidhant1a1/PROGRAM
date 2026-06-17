/*
Problem Description: Write 'C' code that occepts 2 string concatenate them without using predefined function.
    Input: GATE EXAM
    Output:
        GATEEXAM    
*/
# include<stdio.h>
# include<string.h>
int main()
{
    char word1[]="Hello";
    char word2[]="World";
    
    int n=strlen(word1);
    int m=strlen(word2);

    char conWord[n+m+1];
    for(int i=0; i<n+m; i++)
    {
        if(i<n)
        {
            conWord[i]=word1[i];
        }
        else
        {
            conWord[i]=word2[i-n];
        }
    }
    conWord[n+m]='\0';
    printf("%s",conWord);
    return 0;
}