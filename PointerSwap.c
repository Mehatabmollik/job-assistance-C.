#include<stdio.h>

void swap(int *p,int *q)
{
    int t=*p;
    *p=*q;
    *q=t;

}
int main()
{
   int x=10,y=20;
   swap(&x,&y);
   printf("After swap Value of x=%d ,y=%d",x,y);
   return 0;
}
