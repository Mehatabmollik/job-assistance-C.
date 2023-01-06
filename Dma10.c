#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,max,min,i;

    printf("Enter the size of array:\n");
    scanf("%d",&n);

    int *p;
    p=(int *)calloc(n,sizeof(int));

    printf("Enter %d No:\n",n);

    for(i=0;i<n;i++)
        scanf("%d",(p+i));

	max = p[0];
	for( i = 0; i < n; i++) {
		if(max < p[i]) {
			max = p[i];
		}
	}

	min = p[0];
	for(i = 0; i < n; i++) {
		if(min > p[i]) {
			min = p[i];
		}
	}

printf("\nMaxi and minimum no: %d, %d\n", max, min);

  free(p);
  return 0;
}
