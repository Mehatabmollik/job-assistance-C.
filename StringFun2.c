#include<stdio.h>
void reverse(char s[])
{
    int i,j,temp;
    j=strlen(s);
      for(i=0;i<j/2;i++)
      {
          temp=s[i];
          s[i]=s[j-1-i];
          s[j-1-i]=temp;
      }
      printf("%s",s);
}
int main()
{
    char a[]="prateekshab";
    reverse(a);
    return 0;
}
