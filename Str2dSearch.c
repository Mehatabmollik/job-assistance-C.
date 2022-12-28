#include<stdio.h>
int main()
{
    char a[][10]={"sourav","milan","biswa","arijit","arnab"};
    int i,j;
    char b[]="milan";
    for(i=0;i<5;i++)
    {
         if(strcmp(b,a[i])==0)
            printf("string found");
    }
    return 0;
}
