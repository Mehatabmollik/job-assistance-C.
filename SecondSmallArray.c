#include<stdio.h>
int main()
 {
   int a[10] = {10,99,33,4, 50, 69, 7, 81, 9, 10};
   int i,max=-1,max1=0;
   for(i=0;i<10;i++)
   {
       if(max<a[i])
       {
           max1=max;
           max=a[i];
       }
       else if(max1<a[i])
       {
            max1=a[i];
       }
   }

   printf("Second small- %d \n",max1);

   return 0;
}
