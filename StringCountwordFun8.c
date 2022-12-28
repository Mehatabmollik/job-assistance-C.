#include<stdio.h>
void wordcount(char s[])
{
    int i,count=1;
    for(i=0;s[i];i++)
    {
        if(s[i]==' ' && s[i+1]!=' ')
            count++;
    }
    printf("Word no Is %d",count);
}
int main()
{
    char s[]="Education services limited";
    wordcount(s);
}
