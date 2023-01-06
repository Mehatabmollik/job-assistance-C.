#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,max;

    printf("Enter the size of array:\n");
    scanf("%d",&n);

    int *p;

    p=(int *)calloc(n,sizeof(int));

    printf("Enter %d no:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",p+i);

     max=*p+i;
    for(i=0;i<n;i++)
        {
          if(max< *(p+i))
            max=*(p+i);
        }

    printf("Maximum no is %d \n",max);

    free(p);
    return 0;
}

