# include<stdio.h>
int main()
{
        char *str,s1=0 , word=0,word2=0;
        printf("Enter any sentence which you went = ");
        scanf("%[^\n]s",str);
        while(*str !='\0'){
                if(*str==' '||*(str+1)=='\0')
                {
                        word2=0;
                        s1=word + 1;
                        while(s1!=0)
                        {
                                printf("%c",*str);
                                str--;
                                s1--;
                                word2++;
                        }
                        printf(" ");
                        str=str+word2;
                        str++;
                        word=0;
                }
                else
                {       str++;
                        word++;
                }
        }
        return 0;
}