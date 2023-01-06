#include<stdio.h>
int *fun()
{
    int x;
     return &x;
}

int main()
{
    int *ptr=fun(); //Dangling pointer.

    return 0;
}
