#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;

    printf("Enter value of n:\n");
    scanf("%d",&n);

    int *p;

    p=(int *)malloc(n*sizeof(int));
    if(p==NULL){
        printf("Memory Allocation failed:\n");
        return;
    }

    printf("Enter %d no:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",p+i);
}
