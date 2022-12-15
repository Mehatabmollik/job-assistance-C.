#include<stdio.h>
int prime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            break;
        }
    }
    if(n==i)
      printf(":Prime:\n");
    else
      printf(":Not:\n");
      return 0;
}
int main()
{
    int a;
    printf("Enter a no:\n");
    scanf("%d",&a);
    prime(a);

    return 0;
}
