#include<stdio.h>
int main()
{
    //ax^2+bx+c=0
    double a,b,c,distinct;
    printf("Enter Three Input:");
    scanf("%lf %lf %lf",&a,&b,&c);
    distinct=b*b-4*a*c;
    if((distinct>0))
        printf("Quadratic Equation are Real :");
    else if((distinct==0))
        printf("Equal");
    else if((distinct<0))
        printf("Imaginary Roots");
    return 0;
}
