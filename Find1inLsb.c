#include<stdio.h>
int main()
 {

     int x=14,count=0;
     while(x!=0)
     {
         count++;
         if(x&1==1)
         {
             printf("Lsb 1 is =%d",count);
             break;
         }
         x=x>>1;
     }
     return 0;
 }
