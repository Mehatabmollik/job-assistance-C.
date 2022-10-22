#include<stdio.h>
int main()
{
    int x,sum=0;
    printf("Enter the number :\n");
    scanf("%d",&x);
    sum=x%10;
    x=x/10;
    sum=(x%10)+sum;
    x=x/10;
    sum=sum+x;
    printf("Sum of unit digit no are=%d",sum);
    return 0;
}
