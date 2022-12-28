#include<stdio.h>
int main()
{
    int a[10],i,min=a[0];
    printf("Enter 10 no:\n");
    for(i=0;i<10;i++)
    {
       scanf("%d",&a[i]);
     if(min>a[i])
      {
         min=a[i];
      }
    }
    printf("minimum no in an array is =%d",min);
    return 0;
}
