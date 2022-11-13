#include<stdio.h>

int main()
{
    int a,i,count=0;
    printf("Enter the digit:");
    scanf("%d",&a);
    while(a>0)
    {
        a=a/10;
        count++;
    }
    printf("Digit count :%d",count);
    return 0;
}
