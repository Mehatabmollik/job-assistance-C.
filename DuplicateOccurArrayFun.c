#include<stdio.h>
void duplicate(int x[])
{
    int i;
    int h[100]={0};
    for(i=0;i<10;i++)
    {
        h[x[i]]++;
    }
    for(i=0;i<100;i++)
    {
        if(h[i]==2)
        {
            printf("%d--->%d\n",i,h[i]);
        }
    }

}
int main()
{
    int a[10]={1,3,2,1,3,5,7,4,5,6};
    duplicate(a);
    return 0;
}
