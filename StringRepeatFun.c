#include<stdio.h>
void repeat(char s[])
{
    int i;
    int h[150]={0};
    for(i=0;s[i];i++)
    {
       h[s[i]]++;
    }
    for(i=65;i<123;i++)
    {
        if(h[i]==2)
        printf("%c--->%d\n",i,h[i]);
    }
}
int main()
{
    char str[]="My coding journey";
    repeat(str);
    return 0;
}
