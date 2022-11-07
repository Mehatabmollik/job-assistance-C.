#include<stdio.h>
int main()
{

    int a,b,c,max;
    printf("Enter three Int Number :");
    scanf("%d %d %d",&a,&b,&c);
    max=((a>b)?((a>c) ? a : c) : ((b>c)?b:c));
    printf("Big is =%d",max);
    return 0;
}
