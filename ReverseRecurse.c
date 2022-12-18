#include<stdio.h>
void rever(int n)
{
    if(n==0)
        return;
    printf("%d",n%10);
    rever(n/10);

}
int main()
{
    rever(144634);
    return 0;
}
