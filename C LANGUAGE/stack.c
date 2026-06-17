#include<stdio.h>
#include<Stdlib.h>
#define size 10

int queue[size],top=-1;

void push(int value)
{
    if(top==size-1)
        printf("\nStack is Overflow! Insertion is not possible.\n");
    else
    {
        queue[++top]=value;
        printf("\nInsertion successful: %d added to stack.\n",value);
    }
}

void pop()
{
    if(top==-1)
        printf("\nStack is Underflow! Deletion is not possible.\n");
    else
        printf("\nDelete: %d\n",queue[top--]);
}


void display()
{
    if(top==-1)
        printf("\nStack is Empty!\n");
    else  
    {
        printf("\nStack elements are:\n");
        for(int i=top; i>=0; i--)
            printf("%d\n",queue[i]);
    }
}

void main()
{
    int choice, value;
    while(1)
    {
        printf("\n\n************MENU*************\n");
        printf("1. PUSH\n2. POP\n3. DISPLAY\n4. EXIT\n");
        printf("\n Enter your choice = ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: 
                    printf("Enter the value to push in stack = ");
                    scanf("%d",&value);
                    push(value);
                break;
            case 2: pop();
                 break;
            case 3: display();
                break;
            case 4: printf("Exiting the program. Goodbye!\n");
                    exit(0);
                break;
            default: printf("\nWrong selection! Please try again.\n");
        }

    }
}