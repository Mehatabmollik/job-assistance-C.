#include<stdio.h>
int lcm(int a,int b)
{
    int L;
    for(L=a>b?a:b;L<=a*b;L++)
    {
        if(L%a==0 && L%b==0)
            break;
    }
    return L;
}
int main()
{
    int a,b,c;
    printf("Enter two no:");
    scanf("%d%d",&a,&b);
    c=lcm(a,b);
    printf("Lcm is =%d",c);
    return 0;
}
