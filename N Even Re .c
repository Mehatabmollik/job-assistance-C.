#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter The N number:\n ");
    scanf("%d",&n);
    for(i=0;i<=n;i+=2){
        printf("%d ",(n-i));
    }
    return 0;
}


