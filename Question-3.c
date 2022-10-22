#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter The two values :\n");
    scanf("%d %d",&a,&b);
    printf("Before Swap the value =%d,%d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("After Swap the values=%d,%d\n",a,b);
    return 0;

}
