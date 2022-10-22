#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the Values :\n");
    scanf("%d %d",&x,&y);
    printf("Before Swap=%d,%d\n",x,y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("After Swap=%d,%d\n",x,y);
    return 0;
}
