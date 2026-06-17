# include<stdio.h>
int arr[]={4,5,6,7,8};

void printArray(int array[], int size)
{
    for(int i=0; i<size; i++ )
    {
        printf("%d \t", array[i]);
    }
    printf("\n");
}

void logic(int arr[], int size, int position, int num){
    for(int k=size; k>position; k--)
    {
        arr[k] = arr[k-1];
    }
    arr[position] = num;
}

void main()
{

    int n, p , ans;
    int size=5;
    
    futher:
    ans=0;
    printArray(arr,size);
    printf("Enter the number which you went to enter = ");
    scanf("%d",&n);
    printf("Enter the position where you went to enter = ");
    scanf("%d",&p);

    size++;
    arr[size];

    logic(arr,size,p,n);

    printf("array after insertion : \n");
    printArray(arr, size);

    printf("you further want to insert number in array then you enter '1' otherwise enter '0' = ");
    scanf("%d",&ans);
    if(ans==1){
        goto futher;
    }
    
}