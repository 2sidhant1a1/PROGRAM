# include<stdio.h>
void main()
{
    int N,K,current=0;
    printf("Enter the N number = ");
    scanf("%d",&N);
    printf("Enter the K number = ");
    scanf("%d",&K);
    current=N+K;
    printf("Result of Sum of the series:-\n");
    while(current>0)
    {
        printf("%d\t",current-K);
        current=current-K;
    }
        
    while(current<N)
    {
        printf("%d\t",current+K);
        current=current+K;
    }
        
}