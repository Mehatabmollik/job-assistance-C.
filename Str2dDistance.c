#include<stdio.h>
#include<string.h>
int main()
{
    char s[][10]={"my","nick","name","is","coder"};
    char word1[]="my";
    char word2[]="coder";
    int i,w1=-1,w2=-2,min=0;
    for(i=0;i<5;i++)
    {
        if(strcmp(s[i],word1)==0)
            w1=i;
        if(strcmp(s[i],word2)==0)
            w2=i;
        if(w1!=-1 && w2!=-2)
        {
            min=abs(w2-w1);
        }
    }
    printf("%d",min-1);
}
