#include<stdio.h>
#include<string.h>
int main()
{
    char s[][10]={"hiya","ruhan","sanaya","ariya"};
    int i,f=1,count=0;
    char str[]="ruhan";
    for(i=0;i<4;i++)
    {
        if(strcmp(s[i],str)==0){
            printf("name matched.\n");
            count++;
        }
    }

    if(count>=1)
    {
    for(i=1;i<=5;i++)
            f=f*i;
    }
    printf("Factorial of 5 is %d\n",f);
    if(count==0)
        printf("Error");
 return 0;
}
