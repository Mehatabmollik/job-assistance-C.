#include<stdio.h>
int main()
{
    char str[]="praTeekShab",i=0;n
    while(str[i]!='\0')
    {
        if((str[i]>= 'a') && (str[i]<='z'))
        str[i]=str[i]-32;
        else if((str[i]>='A') && (str[i]<= 'Z'))
        str[i]=str[i]+32;
      i++;
    }
    printf("After convert :%s",str);
}
