#include<stdio.h>
void factor (int n)
{
    int i;
    for(i=2;i<=n;i++)
    {
        while(n%i==0){
            printf("%d ",i);
        n=n/i;
        }
    }

}
int main()
{
    factor(36);
    return 0;
}

