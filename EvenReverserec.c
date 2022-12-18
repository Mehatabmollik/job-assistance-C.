#include<stdio.h>
void reeven(int n)
{
    if(n==0)
        return 1;
    printf("%d ",2*n);
    reeven(n-1);

}
int main()
{
    reeven(10);
    return 0;
}

