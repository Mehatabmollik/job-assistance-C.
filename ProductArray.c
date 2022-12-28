#include<stdio.h>
int main()
{
    int a[2][2]={3,2,1,4},i,j,sum=0,k;
    int b[2][2]={3,2,9,4},c[2][2];
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            sum=0;
            {
                for(k=0;k<2;k++)
                {
                    sum=a[i][k]*b[k][j]+sum;
                }
                c[i][j]=sum;
            }
        }
    }
     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
         printf("%d ",c[i][j]);

        }
        printf("\n");
    }
    return 0;
}

