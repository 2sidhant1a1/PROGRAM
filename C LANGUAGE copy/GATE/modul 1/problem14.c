# include<stdio.h>
void printHD(int Dnum)
{
    if(Dnum<9)
        printf("%d",Dnum);
    else
        printf("%c",Dnum+55);
}
void hexaDecimal(int Dnum)
{
    if(Dnum<16)
        printHD(Dnum);
    else
    {
        hexaDecimal(Dnum/16);
        printHD(Dnum%16);
    }
}
void main()
{
    int num;
    printf("Enter the Decimal Number = ");
    scanf("%d",&num);
    printf("Hexadecimal Number = ");
    hexaDecimal(num);
}