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
       if(H==1)
        printf("CO-prime");
       else
        printf("Not co-prime");
    return 0;
}
