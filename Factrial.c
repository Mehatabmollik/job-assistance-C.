#include<stdio.h>
 int main()
 {
     int a,fact=1,i;
     printf("Enter the No:\n");
     scanf("%d",&a);

     for(i=1;i<=a;i++)
     {
         fact=fact*i;
     }
     printf("Factorial is %d",fact);
     return 0;
 }
