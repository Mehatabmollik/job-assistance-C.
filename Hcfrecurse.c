#include<stdio.h>
int hcf(int a,int b)
{
    if(b==0)
        return a;
    return hcf(b,a%b);
}
int main()
{
    int a;
    a=hcf(35,7);
    printf("Hcf is %d",a);
    return 0;
}
