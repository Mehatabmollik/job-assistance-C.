#include<stdio.h>
#include<string.h>
int length(char *p)
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
    char s[]="Coder community";
    int len;

    len=length(s);
    printf("%d",len);
}
