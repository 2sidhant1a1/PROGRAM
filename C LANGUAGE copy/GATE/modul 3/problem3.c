# include<stdio.h>
void swap(int *num,int *temp, int size)
{
    for(int j=size-1; j>-1; j=j-2)
    {
        if(0<=j-1)
        {
            int tem = num[j];
            temp[j]=num[j-1];
            temp[j-1]=tem;
        }
        
    }
}
void main()
{
    int size;
    printf("Enter the total number = ");
    scanf("%d",&size);
    int num[size];
    int temp[size];
    for(int i=0; i<size; i++)
    {
        printf("Enter the number = ");
        scanf("%d",&num[i]);
    }
    for(int j=0; j<size; j++)
    {
        printf("%d ",num[j]);
    }
    printf("\n");
    swap(num,temp, size);
    
    for(int k=0; k<size; k++)
    {
        if(size%2==0)
        {
            printf("%d ",temp[k]);
        }
        else if(size%2==1 && k<size-1)
        {
            printf("%d ",temp[k+1]);
        }
    }
}