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
    for(int i=1; i<n; i++){
        int key=a[i];
        int j=i-1;
        while(i>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    for(int k=0; k<n; k++){
        printf("%d ", a[k]);
    }
}