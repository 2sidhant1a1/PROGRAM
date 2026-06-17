/*
Problem Description: A Mersemme prime is a Mersenne number. i.e., a number of the form M=(2^n)-1 that is prime.
In order for M to be prime. n must itself be prime.

Write 'C' code that prime the All mersemme prime number up to given N value.
    Input : 10
    Output : 
        3,7,31,127
*/

# include<stdio.h>
# include<math.h>
int prime(int value)
{
    int i=2;
    while(i<value/2)
    {
        if(value%i==0)
            return 0;
        i++;
    }
    return 1;
}

int marsenne(int num){
    long int value=1;
    for(int i=1; i<=num; i++){
        value = 2*value;
    }
    value = value-1;
    // printf("%d",value);
    if(prime(value))
        printf("\t%d->%ld",num,value);
    return 0;
}

int main()
{
    int num,last;
    printf("Enter the number = ");
    scanf("%d",&last);

    printf("All Mersenne prime numbers uot to given %d value.\n",last);
    for(int num=2; num<=last; num++)
    {
        if(prime(num))
            marsenne(num);
    }
    return 0;
    
}