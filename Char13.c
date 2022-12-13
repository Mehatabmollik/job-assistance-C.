#include<stdio.h>
int main()
//not correct
 {
     int i,j;
     char k;
     for(i=1;i<=5;i++)
     {
         k='A';
         for(j=1;j<=10;j++)
         {
             if((j<=6-i) || (j>=5+i))
             {
                printf("%c",k);
                j<=4?k++:k--;
             }
             else
             {
                printf(" ");
             }

         }
         printf("\n");
     }
     return 0;
 }
