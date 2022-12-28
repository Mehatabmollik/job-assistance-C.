#include<string.h>
#include<stdio.h>
void palind(char s[])
{
    int i=0,j;
    j=strlen(s)-1;
    while(i<=j)
    {
        if(s[i]==s[j]){
        i++;
        j--;
        }else{
        break;
        }
    }
    if(i>j)
        printf("palindrome");
    else
        printf("Not");

}
int main()
{
    int a[20];
    printf("Enter a string: ");
    gets(a);
    palind(a);
}
