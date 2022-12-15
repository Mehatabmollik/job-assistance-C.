#include<stdio.h>
int evenodd(int);
int main()
{
    int n,a;
    printf("Enter any number:");
    scanf("%d",&n);
    a=evenodd(n);
    if(a%2==1)
        printf("Even");
    else
        printf("Odd");
    return 0;
}

int evenodd(int n)
{
    return(n%2==0);

}

