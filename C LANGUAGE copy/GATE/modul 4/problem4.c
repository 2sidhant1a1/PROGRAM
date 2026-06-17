/*
Problem Description: Given alist of words followed by two words. 
    The task is to find the minumum distance between the given two words in the list of words.
        Input: {"Pen","Book","Pad","Pencil","pen","Book"},Pad,Book
        Output: 
            1

        Input: {"Pen","Book","Pad","Pencil","pen","Slate"},Pad,Slate
        Output: 
            3
*/
#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Read the array of words
    char word[n][20];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the word: ");
        scanf("%s", word[i]);
    }

    // Read the two target words
    char target[2][20];
    for (int i = 0; i < 2; i++)
    {
        printf("Enter the target word: ");
        scanf("%s", target[i]);
    }

    // Variables to track the positions of the target words
    int pos1 = -1, pos2 = -1, minDistance = n;

    // Loop through the array to calculate the minimum distance
    for (int i = 0; i < n; i++)
    {
        if (strcmp(word[i], target[0]) == 0)
        {
            pos1 = i;  // Update position of the first target word
        }
        else if (strcmp(word[i], target[1]) == 0)
        {
            pos2 = i;  // Update position of the second target word
        }

        // Calculate the distance if both words have been found
        if (pos1 != -1 && pos2 != -1)
        {
            int distance = abs(pos1 - pos2);
            if (distance < minDistance)
            {
                minDistance = distance;
            }
        }
    }

    // Output the result
    if (pos1 != -1 && pos2 != -1)
    {
        printf("\nMinimum Distance: %d\n", minDistance);
    }
    else
    {
        printf("\nOne or both words not found in the array.\n");
    }

    return 0;
}