#include<stdio.h>
int main()
{
    int a[10],i,se=0,so=0;
    printf("Enter 10 no:\n");
    for(i=0;i<10;i++)
       scanf("%d",&a[i]);
    for(i=0;i<10;i++)
         {
             if(a[i]%2==0)
             {
                 se=se+a[i];
             }
             else
             {
                 so=so+a[i];
             }
         }
    printf("sum of even is =%d\n",se);
    printf("Sum of odd is =%d",so);
    return 0;
}

