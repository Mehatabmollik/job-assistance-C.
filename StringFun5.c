#include<stdio.h>
#include<string.h>
void lower(char s[])
{
    printf("%s",strlwr(s));
}
int main()
{
    char a[]="AsSIGNMENT";
    lower(a);
}
