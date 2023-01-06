#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,sum=0;

    printf("Enter value of n:\n");
    scanf("%d",&n);

    int *p;

    p=(int *)malloc(n*sizeof(int));
          //Memory leak happen here coz without free the
    p=&n; //memory we assign another address

    printf("Enter %d no:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",p+i);


     for(i=0;i<n;i++)
        printf("%d ",(*p+i));

     free(p);
     return 0;
}
