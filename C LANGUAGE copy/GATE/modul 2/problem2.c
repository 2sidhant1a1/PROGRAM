# include<stdio.h>
void main()
{
    int num;
    printf("Enter the any value = ");
    scanf("%d",&num);
    char sym;
    printf("choose the alphabate or number = ");
    scanf(" %c",&sym);
    for(int i=0; i<num; i++)
    {
        for(int j=0; j<num; j++)
            printf("%c",sym+j);
        printf("\n");
    }
}