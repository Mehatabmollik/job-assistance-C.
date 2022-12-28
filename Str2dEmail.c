#include<stdio.h>
#include<string.h>
int main()
{
    char s[4][15];
    int i,j;
    printf("Enter 4 email id:\n");
    for(i=0;i<4;i++)
        gets(s[i]);

    for(i=0;s[i][j];i++)
    {
        if(strchr(s[i],'a')!=0)
            printf("%s\n",s[i]);
    }
    return 0;
}
