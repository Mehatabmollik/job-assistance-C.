#include<stdio.h>
int main()
{
    int a=10,b=20;
     int *p=&a;
     int *q=&b;
    if(*p>*q)
    printf("Max is %d",*p);
    else
    printf("Max is %d",*q);
    return 0;
}
