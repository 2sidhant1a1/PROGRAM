/*
write 'c' code that find out the given number is Fibonacci Number or Not.
    Input : 21
    Output :
        21 is Fibonacci Number
*/



// # include<stdio.h>
// int main()
// {
//      int last, a=1,b=1,i=2;
//     printf("Enter the number = ");
//     scanf("%d",&last);
//     if(last==0||last==1)
//     {
//         printf("%d is Fibonacci Number.",last);
//         return 0;
//     }
//     while(a<=last && b<=last)
//     {
//         if(i%2==0)
//             a=a+b;
//         else
//             b=b+a;
//         i++;
//     }
//     if(a==last)
//         printf("%d is Fibonacci Number.",last);
//     else if(b==last)
//         printf("%d is Fibonacci Number.",last);
//     else
//         printf("%d is not Fibonacci Number.",last);
// }



                //perfect squre
# include<stdio.h>
# include<math.h>
int perfectSqure(int value)
{
    int i=sqrt(value);
    if(value==i*i)
        return 1; 
    return 0;
}
int main()
{
     int last, a=1,b=1,i=2;
    printf("Enter the number = ");
    scanf("%d",&last);
    int result = perfectSqure(5*last*last+4)||perfectSqure(5*last*last-4);
    if(result==1)
        printf("%d is Fibonacci Number.",last);
    else
        printf("%d is not Fibonacci Number.",last);
}