#include<stdio.h>
#include<string.h>
void compare(char s[])
{
    char a[]="Rahit";
    int r;
    r=strcmp(a,s);
    printf("%d ",r);
}
int main()
{
    char b[]="Rohul";
    compare(b);
    return 0;
}
