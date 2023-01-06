#include<stdio.h>
int sum(int *p,int s)
{
    int i,add=0;
    for(i=0;i<s;i++)
        add=add+p[i];
 return add;
}
int main()
{
    int c,a[]={9,4,2,1,3};
    c=sum(a,5);
    printf("Sum of all elements %d ",c);
    return 0;
}
