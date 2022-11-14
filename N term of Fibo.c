#include<stdio.h>

int main()
{
    int a=1,b=1,n,c,count;
    printf("Enter the number:\n");
    scanf("%d",&n);
    printf("First %d fibonacci numbers are...\n",n);
    printf("%d\n",a);
    printf("%d\n",b);
    count=2;
      while(c<n)
    {
        c=a+b;
        count++;
        printf("%d\n",c);
        a=b;
        b=c;
    }
    return 0;
}
