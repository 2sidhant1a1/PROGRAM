# include<stdio.h>
int size=10;
int delete(int *num,int size)
{
    int del;
    printf("Enter the value which you went to delete = ");
    scanf("%d",&del);
    for(int i=0; i<size; i++)
    {
        if(del==num[i])
        {
            for(int j=i; j<size; j++)
            {
                num[j]=num[j+1];
            }
            size=size-1;
            printf("\nyou delete: %d successfully.\n",del);
            for(int i=0; i<size; i++)
                printf("%d ",num[i]);
            
            return size;
        }  
    }
    printf("value is not found in array");
    return size;
}
int main()
{
    int size, choice;
    printf("Enter the total number which you went to enter = ");
    scanf("%d",&size);
    int num[size], temp[size/2];
    for(int i=0; i<size; i++)
    {
        printf("Enter the number = ");
        scanf("%d",&num[i]);
    }
    while(1)
    {
        printf("\n\n***********MENU************");
        printf("\n 1. DELETE\n2. EXIT\n");
        printf("Choose your option = ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: 
                size = delete(num,size);
                break;
            case 2: printf("YOur value in array are:-\n");
                    for(int i=0; i<size; i++)
                        printf("%d ",num[i]);
                return 0;
            default: printf("YOu choice worng value.");
        }
    }
}