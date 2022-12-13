#include<stdio.h>
int main()

 {
     int i,j,k,l;
     for(i=1;i<=4;i++)
     {
         for(j=1;j<=7;j++)
         {
             if(j>=5-i && j<=3+i)
                printf("*");
             else
                printf(" ");

         }
         printf("\n");

     }

      for(k=1;k<=4;k++)
     {
         for(l=1;l<=7;l++)
         {
             if((l>=k) && (l<=8-k))
                printf("*");
             else
                printf(" ");

         }
         printf("\n");
     }
     return 0;
 }


