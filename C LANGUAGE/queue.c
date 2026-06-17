#include<stdio.h>
#include<Stdlib.h>

#define size 10

int queue[size],rear=-1,front=-1;

void Enqueue(int value)
{
    if(rear==size-1)
        printf("\nqueue is Overflow! Insertion is not possible.\n");
    else if (rear==-1||front==-1)
    {
        rear=0; front=0;
        queue[rear++]=value;
        printf("\nInsertion successful: %d added to Queue.\n",value);
    }
    else
    {
        queue[rear++]=value;
        printf("\nInsertion successful: %d added to Queue.\n",value);
    }
}

void Dequeue()
{
    if(front>rear && front!=-1)
        printf("\nQueue is Underflow! Deletion is not possible.\n");
    else
        printf("\nDelete: %d\n",queue[front++]);
}


void Display()
{
    if(front==-1 || front>rear)
        printf("\nQueue is Empty!\n");
    else  
    {
        printf("\nQueue elements are:\n");
        for(int i=front; i<rear; i++)
            printf("%d\n",queue[i]);
    }
}

void main()
{
    int choice, value;
    while(1)
    {
        printf("\n\n************MENU*************\n");
        printf("1. INSERT\n2. DELETE\n3. DISPLAY\n4. EXIT\n");
        printf("\n Enter your choice = ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: 
                    printf("Enter the value to push in QUEUE = ");
                    scanf("%d",&value);
                    Enqueue(value);
                break;
            case 2: Dequeue();
                 break;
            case 3: Display();
                break;
            case 4: printf("Exiting the program. Goodbye!\n");
                    exit(0);
                break;
            default: printf("\nWrong selection! Please try again.\n");
        }

    }
}