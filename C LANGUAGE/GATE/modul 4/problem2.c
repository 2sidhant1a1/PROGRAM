/*
Problem Description: Given a string str[i]. The task is to check if it is pangram or not.
    A pangram is a sentence containing every letter in the English Alphabet.
        Input: The quick brown fox jumps over the lazy dog.
        Output:
        True
*/
#include<stdio.h>
#include<string.h>

int main()
{
    int status[26] = {0};
    char str[100];

    // Taking the string input
    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    // Checking for presence of each letter
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            status[str[i] - 'a'] = 1;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            status[str[i] - 'A'] = 1;
        }
    }

    // Verifying if all letters are present
    for (int i = 0; i < 26; i++)
    {
        if (status[i] == 0)
        {
            printf("\nFalse\n");
            return 0;
        }
    }

    printf("\nTrue\n");
    return 0;
}