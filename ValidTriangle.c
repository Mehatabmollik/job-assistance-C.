#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 Sides of a Triangle :\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>=c || b+c>=a ||c+a>=b)
        printf("Valid Triangle\n");
    else
        printf("Not Valid\n");
    return 0;
}
