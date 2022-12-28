#include<stdio.h>
int main()
 {
   int a[10] = {12,5,4,9,11,10,76,65,9,32};
   int i,max=-1,max1=-2;
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

   printf("Second large- %d \n", max1);

   return 0;
}
