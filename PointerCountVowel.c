#include<stdio.h>
int vowel(char *p)
{
    int count=0;
    while(*p)
    {
        if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u')
            count++;
     *p++;
    }
    return count;
}
int main()
{
    char s[]="Count Vowel in a string";
    int c;
    c=vowel(s);
    printf("%d",c);
    return 0;
}
