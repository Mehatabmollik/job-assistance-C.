#include<stdio.h>
int hcf(int a,int b)
{
    int L,h;
    for(L=a>b?a:b;L<=a*b;L++)
    {
        if(L%a==0 && L%b==0)
            break;
    }
    h=a*b/L;
    return h;
}
int main()
{
    int a,b,c;
    printf("Enter two no:");
    scanf("%d%d",&a,&b);
    c=hcf(a,b);
    printf("Hcf is =%d",c);
    return 0;
}
