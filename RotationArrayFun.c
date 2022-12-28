#include<stdio.h>
void rotate(int x[],int s,int d)
{
    int i,j,a;
    for(j=1;j<=d;j++)
    {
        a=x[s-1];
        for(i=s-1;i>0;i--)
        {
          x[i]=x[i-1];
        }
       x[0]=a;
    }
   for(i=0;i<s;i++)
   {
       printf("%d ",x[i]);
   }
}
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    rotate(a,10,3);
    return 0;

}
