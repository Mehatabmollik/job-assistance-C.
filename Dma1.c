#include<stdio.h>
#include<stdlib.h>

int main()
{
    char *str;
    int length;
    char name;
    printf("Enter length string:\n");
    scanf("%d",&length);

    str= (char *)calloc(length+1 , sizeof(char));

    printf("Enter the string:\n");
    scanf("%s",name);

    printf("%s",name);
    free(str);
    return 0;
}
