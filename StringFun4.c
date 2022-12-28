#include<stdio.h>
#include<string.h>
void upper(char s[])
{
    printf("%s",strupr(s));
}
int main()
{
    char a[]="deepika";
    upper(a);
}
