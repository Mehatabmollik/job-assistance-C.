#include<stdio.h>
#include<string.h>
void charswap(char* str1, char* str2)
{
    int len = strlen(str1);
    for(int i=0; i<len; i++)
    {
        char temp = str1[i];
        str1[i] = str2[i];
        str2[i] = temp;
    }
}
int main()
{
    char a[]="String";
    char b[]="Array";
    charswap(a,b);
    printf("After Swap a=%s , b=%s",a,b);
    return 0;
}
