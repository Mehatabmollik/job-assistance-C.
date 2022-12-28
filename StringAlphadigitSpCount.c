#include<stdio.h>
int main()
{
    char str[]="mehatab543@gmail . com";
    int alpha=0,digit=0,spcl=0,i=0;
    while(str[i]!='\0')
    {
        if((str[i]>='a') && (str[i]<='z') || (str[i]>='A') && (str[i]<='Z'))
            alpha++;
        else if((str[i]>='0') && (str[i]<='9'))
              digit++;
        else
            spcl++;
      i++;

    }
    printf("Number of alphabet in String =%d\n",alpha);
    printf("Number of digit in String =%d\n",digit);
    printf("Number of special character in String =%d\n",spcl);
    return 0;

}
