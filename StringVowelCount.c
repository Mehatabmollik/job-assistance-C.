#include<stdio.h>
int main()
{
    char str[]="Mehatab",count=0,i=0;
    while(str[i]!='\0')
    {
        if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            count++;
        }
        i++;
    }
    printf("Vowel in given string %d time",count);
    return 0;
}

