#include<stdio.h>
int reprint(char *p)
{
    int count=0;
    while(*p)
    {
        count++;
       *p++;
    }
    return count;
}
int main()
{
    char s[]="Computer";
    char *p=s;
    int i,len;
    len=reprint(s);
     for(i=len-1;i>=0;i--)
       printf("%c",s[i]);
}
