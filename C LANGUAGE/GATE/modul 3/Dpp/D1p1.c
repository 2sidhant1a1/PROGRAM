#include<stdio.h>
int mul(int *matrix1,int *matrix2,int row1,int col2,int i,int j)
{
    for(int k=i; k<row1; k++)
    {
        for(int l=j; l<col1_row2; l++)
        {
            value=value+matrix1[i][j]
        }
    }

}
void main()
{
    int size, row1, col1_row2,col2;
    printf("Enter the row of first matirx : ");
    scanf("%d",&row1);
    printf("Enter the column of first matirx and row of second matrix : ");
    scanf("%d",&col1_row2);
    printf("Enter the column of matirx : ");
    scanf("%d",&col2);
    int matrix1[row1][col1_row2];
    int matrix2[col1_row2][col2];
    for(int i=0; i<row1; i++)
    {
        for(int j=0; j<col1_row2; j++)
        {
            printf("Enter your value = ");
            scanf("%d",&matrix1[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<col1_row2; i++)
    {
        for(int j=0; j<col2; j++)
        {
            printf("Enter your value = ");
            scanf("%d",&matrix1[i][j]);
        }
        printf("\n");
    }
    int temp[row1][col2];
    for(int i=0; i<row1; i++)
    {
        for(int j=0; j<col2; j++)
        {
            temp[i][j]=mul(matrix1,matrix2,row1,col2,i,j);
        }
    }

}