#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="Academy",i=0,j=0,temp;
    j=strlen(str);
    for (i = 0; i <j/2; i++)
    {
        // temp variable use to temporary hold the string
        temp = str[i];
        str[i] = str[j- i - 1];
        str[j- i - 1] = temp;
    }
    printf("%s",str);
}
