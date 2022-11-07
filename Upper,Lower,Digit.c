#include<stdio.h>
int main()
{
    char a;
    printf("Enter A character :");
    scanf("%c",&a);
    if((a>=65) && (a<=90))
        printf("Uppercase");
    else if((a>=97) && (a<=122))
        printf("Lowercase");
    else if((a>=48) && (a<=57))
        printf("Digit");
    else
        printf("Special Character");
    return 0;
}
