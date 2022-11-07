#include<stdio.h>
int main()
{
    int x=12,y=12,z=12;
    if((x>y))
        printf("%d x is big",x);
    else if((x==y) ||(y==z)||(z==x))
        printf("All are Equal ");
    else if((y>z))
        printf("%d y is big",y);
    else
        printf("%d z is big",z);
    return 0;

}
