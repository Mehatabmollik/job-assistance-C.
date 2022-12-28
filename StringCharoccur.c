#include<stdio.h>
int main()
{
    char str[]="Mehatab",count=0,i=0;
    while(str[i]!='\0')
    {
        if(str[i]=='a')
        {
            count++;
        }
        i++;
    }
    printf("character 'a' occur %d time",count);
    return 0;
}
