#include<stdio.h>
#include<string.h>
int main()
{
    char a[10][10];
    int i,j;
    char temp[10];
    printf("Enter 10 city name:\n");
    for(i=0;i<10;i++)
        gets(a[i]);

    for(i=0;i<10-1;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(strcmp(a[i],a[j])>0)
            {
                strcpy(temp,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],temp);
            }
        }
    }
    printf("\n");
    for(i=0;i<10;i++)
    {
        printf("%s\n",a[i]);
    }
}
