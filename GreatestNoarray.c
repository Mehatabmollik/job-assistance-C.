#include<stdio.h>
int main()
{
    int a[10],i,max=a[0];
    printf("Enter 10 no:\n");
    for(i=0;i<10;i++)
    {
       scanf("%d",&a[i]);
     if(max<a[i])
      {
         max=a[i];
      }
    }
    printf("maximum no in an array is =%d",max);
    return 0;
}

