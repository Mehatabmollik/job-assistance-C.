#include<stdio.h>
int main()
{
    char a;
    printf("Enter A character :");
    scanf("%c",&a);
    if((a>='A') && (a<='Z'))
        printf("Upperase");
    else if((a>='a') && (a<='z'))
        printf("Lowercase");
    return 0;
}
