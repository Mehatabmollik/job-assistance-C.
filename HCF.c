#include<stdio.h>

int main()
{

    int a,b,L,H;
    printf("Enter two Number:");
    scanf("%d%d",&a,&b);
    for(L=a>b?a:b;L<=a*b;L++)
    {
        if(L%a==0 && L%b==0)
            break;

    }
       H=a*b/L;
       printf("HCF is=%d",H);
    return 0;
}

