# include<stdio.h>
void main(){
    int n;
    printf("Enter the number of element = ");
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n ; i++){
        printf("Enter %d element = ",i+1);
        scanf("%d",&a[i]);
    }
    
    // int a[5]={23,2,223,54,12};
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]>a[j]){
                int temp = a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
}