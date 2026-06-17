# include<Stdio.h>
void main()
{
    int matrix;
    printf("Enter the row or column of the squre matrix = ");
    scanf("%d",&matrix);
    int arr[matrix][matrix];
    for(int i=0; i<matrix; i++)
    {
        for(int j=0; j<matrix; j++)
        {
            printf("Enter the number = ");
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nLTM = Lower Triangular Matrix:-\n");
    for(int i=0; i<matrix; i++)
    {
        for(int j=0; j<matrix; j++)
        {
            if(i>=j)
                printf("%d ",arr[i][j]);
            else
                printf("0 ");
        }
        printf("\n");
    }
    printf("\nUTM = Upper Triangular Matrix:-\n");
    for(int i=0; i<matrix; i++)
    {
        for(int j=0; j<matrix; j++)
        {
            if(i<=j)
                printf("%d ",arr[i][j]);
            else
                printf("0 ");
        }
        printf("\n");
    }

}