#include<stdio.h>
void square();
int main()
{
square();
return 0;
}

void square()
{
    int n;
    printf("Enter number that want to square: ");
    scanf("%d",&n);
    n=n*n;
    printf("Square is %d",n);
    return 0;

}
