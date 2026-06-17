# include<stdio.h>
void main()
{
    int size,point=0,dou=0;
    printf("Enter the total number which you went to enter = ");
    scanf("%d",&size);
    int num[size], temp[size/2];
    for(int i=0; i<size; i++)
    {
        printf("Enter the number = ");
        scanf("%d",&num[i]);
    }
    for(int i=0; i<size; i++)
    {
        int key = num[i], k=0;
        for(int j=i+1; j<size; j++)
        {
            if(key==num[j])
            {
                temp[point++]=key;
                dou++;
                break;
            }            
        }            
    }
    printf("dublicate value = %d",dou);
}