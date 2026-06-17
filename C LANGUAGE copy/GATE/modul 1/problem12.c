/*
lectur no. = 5
*/
#include<Stdio.h>
int binary(int num,int arr[],int i)
{
    if(num<=1)
        arr[i] = num;
    else
    {
        arr[i--] = num%2;
        binary(num/2,arr,i);
    }
}
void main()
{
    int num,arr[16]={0},i=15;
    printf("Enter the number = ");
    scanf("%d",&num);
    binary(num,arr,i);
    for(int j=0; j<=15;j++)
    {
        if(j%4==0)
            printf(" ");
        printf("%d",arr[j]);
    }
}