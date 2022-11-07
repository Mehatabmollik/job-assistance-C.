#include<stdio.h>
int main()
{
    int x;
    printf("Enter number to check :");
    scanf("%d",&x);
    if(x>0)
        printf("Positive");
    else if(x<0)
        printf("non positive");
        else
            printf("Number is 0");
    return 0;
}
