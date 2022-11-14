#include<stdio.h>
int main()
{
    int s=0,r,x,i;
    printf("Armstrong numbers are:\n");
    for(i=1;i<=1000;i++)
    {
        s=0;
        x=i;
        while(x!=0)
     {
         r=x%10;
         s=s+r*r*r;
         x=x/10;
     }
     if(s==i)
        printf("%d\n",i);

    }
    return 0;
}
