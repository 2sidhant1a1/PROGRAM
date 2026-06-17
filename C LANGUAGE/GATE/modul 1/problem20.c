# include<Stdio.h>
void main()
{
    int N,num,sum=0;
    printf("Enter the any number = ");
    scanf("%d",&N);
    for(int i=0; i<N; i++)
    {
        if(i%2==0)
            sum = sum +i;
        else
            sum=sum-i;
            
    }
    printf("%d",sum>0?sum:-1*sum);
}