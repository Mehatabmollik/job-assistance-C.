#include<stdio.h>
int main()
{
    int n=4;
    switch(n&1)
    {
        case 1:printf("Odd no =%d",n);
              break;
        case 0:printf("Near odd =%d",n+1);
               break;
    }
    return 0;
}
