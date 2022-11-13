#include<stdio.h>
int main()
{

    int i,s=0,n;
    printf("Enter The N value :\n");
    scanf("%d",&n);
    for(i=0;i<=n*2;i+=2){
        s=s+i;
    }
    printf("Sum is 1st N Even no =%d\n",s);
    return 0;
}
