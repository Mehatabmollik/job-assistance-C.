#include<stdio.h>
int interest(int ,float ,int);
int main()
{
    int p,t;
    float r,si;
    printf("Enter p rate time of simple interest:");
    scanf("%d%f%d",&p,&r,&t);
    si=interest(p,r,t);
    printf("Simple interest is =%f",si);
    return 0;

}

int interest(int p,float r,int t)
{
    float s;
    s=p*r*t/100;
    return s;
}
