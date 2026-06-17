
/*
Write 'c' code that Calculates sum of 3 given numbers with input entered in one line separated by comma.
        Input : 7,5,4
        Output : 
                16
    
*/
# include<Stdio.h>
void main(){
    int a,b,c;
    printf("Enter the any three no. sepereted by comma :-\n");

            //approch 1
    // scanf("%d,%d,%d",&a,&b,&c);



            //approch 2
    // char s[10];
    // fgets(s,11,stdin);
    // sscanf(s,"%d,%d,%d",&a,&b,&c);

    int sum = a+b+c;
    printf("sum of three no. = %d",sum);
}