#include<stdio.h>

int main()
{
    int a=1,b=1,flag=0,n,c,count;
    printf("Enter the number:\n");
    scanf("%d",&n);
    printf("First %d fibonacci numbers are...\n",n);
    count=2;
      while(c<n)
    {
        c=a+b;
        count++;
         if(n==c)
            flag=1;
             break;
        a=b;
        b=c;
    }
    if(flag==1)
        printf("Yes Present");
    else
        printf("Not");
    return 0;
}
