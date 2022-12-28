#include<stdio.h>
int main()
{
    char str[]="Ineuron education services";
    int s[]={0};
    int i;
    for(i=0;str[i];i++)
    {
        s[str[i]]++;
    }
    for(i=65;i<123;i++)
    {
        if(s[i]>0)
            printf("%c-->%d\n",i,s[i]);
    }
    return 0;
}
