#include<stdio.h>
int area(float);
int main()
{
    float a,c;
    printf("Enter Radius of circle:");
    scanf("%f",&a);
    c=area(a);
    printf("Area is =%f",c);
    return 0;

}

int area(float r)
{
    float a;
    a=3.14*r*r;
    return a;
}
