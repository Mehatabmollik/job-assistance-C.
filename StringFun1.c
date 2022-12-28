#include<stdio.h>
void length(char s[])
{
    int i;
    for(i=0;s[i];i++);
    printf("%d",i);
}
int main()
{
    char str[]="Education";
    length(str);
    return 0;
}
