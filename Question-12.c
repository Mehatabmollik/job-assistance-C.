#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the no :");
    scanf("%d",&x);
    x=x%10*100+x/10;
    printf("After rotate :%d",x);
    return 0;
}
