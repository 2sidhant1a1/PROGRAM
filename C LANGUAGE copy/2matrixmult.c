# include<stdio.h>
void main(){
    int a[3][4]={1,2,3,4,5,6,7,8,9,11,12,13};
    int b[4][5]={1,2,3,4,5,6,7,8,9,11,12,13,13,14,15,16,17,18,19,22};
    int row1 = sizeof(a)/sizeof(a[3]);
    int col1 = sizeof(a[3])/sizeof(int);
    int col2 = sizeof(a[4])/sizeof(int);
    int mul[row1][col2];
    printf("Data of Matrix 1:-\n");
    for(int i=0; i<row1; i++){
        for(int j=0; j<col1; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Data of Matrix 2:-\n");
    for(int i=0; i<col1; i++){
        for(int j=0; j<col2; j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

    printf("Data of multiplication of matrix 1 and matrix 2:-\n");
    for(int i=0 ; i<col2 ; i++){
        for(int j=0; j<row1; j++){
            int temp = 0;
            for(int k=0; k<col1; k++){
                temp += a[j][k]*b[k][i];
            }
            mul[j][i] = temp;
        }
        
    }
    for(int i=0; i<row1; i++){
        for(int j=0; j<col2; j++)
        {
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }

    
}
