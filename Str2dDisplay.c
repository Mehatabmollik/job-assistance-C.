#include<stdio.h>
int main()
{
    char s[5][10];
    int i,j;
    printf("Enter 5 country name:");
    for(i=0;i<5;i++)
    {
    gets(s[i]);
    }
    printf("\n");

    for(i=0;i<5;i++)
            printf("%s\n",s[i]);
    return 0;
}
