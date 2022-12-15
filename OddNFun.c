#include<stdio.h>
void odd(int);
int main()
{
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    odd(n);
    return 0;
}

void odd(int n)
{
    int i;
    for(i=1;i<=n;i+=2)
    {
        printf("Odd No is =%d\n",i);
    }

}

