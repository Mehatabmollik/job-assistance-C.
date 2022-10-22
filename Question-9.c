#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the number :");
    scanf("%d %d",&x,&y);
    x=x*100/10+y;
    printf("After add last digit =%d =%d",y,x);
    return 0;
}
