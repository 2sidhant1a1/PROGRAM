# include<Stdio.h>
void main()
{
    int num;
    printf("Enter the any number = ");
    scanf("%d",&num);
    for(int i=1; i<=num; i++)
    {
        printf("1");
        if(i==1 || i==num)
        {
            for(int k=1; k<=num-2; k++)
                printf("0");
        }
        else
        {
            for(int j=2; j<=num-1; j++)
            {
                if(i<=num/2)
                {
                    if(i==j || j==num-i+1)
                        printf("0");
                    else
                        printf(" ");
                }
                else if(num%2==1 && i==(num/2)+1)
                {
                    if(i==j)
                        printf("0");
                    else
                        printf(" ");
                }
                else
                {
                    if(i==j || j==num-i+1)
                        printf("0");
                    else
                        printf(" ");
                }
            }
            
        }
        printf("1");
        printf("\n");
    }
}