# include<stdio.h>
void main(){
    int n=5,k;
    
    int a[5]={23,2,223,54,12};
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            k=0;
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            else{
                k=k+1;
            }
        if(k==n-i)
        break;
        }
    }
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
}