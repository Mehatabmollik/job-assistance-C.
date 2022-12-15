#include<stdio.h>
int fact(int n)
{
    int i,f=1;
      for(i=1;i<=n;i++)
        f=f*i;
      return f;
}
int sum(int n)
{
    int i,s=0;
    for(i=1;i<=n;i++)
    {
        s=s+fact(i)/i;
    }
    return s;
}
int main()
{
    int s,t;
    printf("Enter a no:");
    scanf("%d",&s);
    t=sum(s);
    printf("Sum is %d",t);
    return 0;
}
