# include<stdio.h>

void conqure(int low, int mid, int high,int temp[], int arr[]){
    int i;
    int l1 = low;
    int l2 = mid + 1;
    for(i = low; l1 <= mid && l2 <= high; i++){
        if(arr[l1] <= arr[l2])
            temp[i] = arr[l1++];
        else
            temp[i] = arr[l2++];           
    }

    while(l1 <= mid)
        temp[i++] = arr[l1++];
    while(l2 <= high)
        temp[i++] = arr[l2++];
    for(i = low; i <= high; i++)
        arr[i] = temp[i];
}


void divide(int low, int high,int temp[], int arr[]){
    if(low<high){
         int mid = (low + high) / 2;
        divide(low, mid, temp, arr);
        divide(mid + 1, high, temp, arr);
        conqure(low, mid, high, temp, arr);

    }
}
void arrayPrint(int arr[],int max){
    for(int i = 0; i < max; i++){
        printf("\t%d", arr[i]);
    }
}

void main(){
    int max;
    printf("Enter the number of element = ");
    scanf("%d",&max);
    int arr[max];
    for(int i=0; i<max ; i++){
        printf("Enter %d element = ",i+1);
        scanf("%d",&arr[i]);
    }
    int temp[max];
    printf("\nlist before sorting:-\n");
    arrayPrint(arr,max);
    divide(0, max - 1, temp, arr);

    printf("\nlist after sorting:-\n");
    arrayPrint(arr, max);

}