#include<stdio.h>
int main()
 {
     int n,r,s=0,temp=0;
     printf("Enter number to be check:");
     scanf("%d",&n);
     temp=n;
     while(n!=0)
     {
         r=n%10;
         s=s+r*r*r;
         n=n/10;
     }
     if(s==temp)
        printf("Armstrong");
      else
        printf("Not Armstrong");
     return 0;
 }
