#include<stdio.h>
int main()
{

    int i,s=0,n;
    printf("Enter The N value :\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        s=s+(i*i*i);
    }
    printf("Sum is 1st N Cubes No=%d\n",s);
    return 0;
}

