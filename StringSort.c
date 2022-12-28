#include<stdio.h>
#include<string.h>
int main()
{
    char s[]="code hack";
    int len,i,j,temp;
    len=strlen(s);
    for(i=0; i<len; i++)
    {
        for(j=0; j<(len-1); j++)
        {
            if(s[j]>s[j+1])
            {
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
    printf("String in ascending order %s\n",s);
}
