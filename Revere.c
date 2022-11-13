#include<stdio.h>

int main()
{
    int rev=0,x,rem=0;
    printf("Enter a number:");
    scanf("%d",&x);
    while(x>0)
    {
        rem=x%10;
        rev=(rev*10)+rem;
        x=x/10;
    }
    printf("Reverse is =%d",rev);
    return 0;
}
