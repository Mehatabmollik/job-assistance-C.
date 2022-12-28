#include<stdio.h>
int main()
{
    int a[2][3]={50,60,10,20,30,40},i,j,sum=0;
    for(i=0;i<2;i++)
    {
        sum=0;
        for(j=0;j<3;j++)
        {
            sum=sum+a[i][j];
        }
        printf("Sum of row is %d\n",sum);
    }
    for(j=0;j<2;j++)
    {
        sum=0;
        for(i=0;i<3;i++)
        {
            sum=sum+a[i][j];
        }
        printf("Sum of column is %d\n",sum);
    }
    return 0;
}
