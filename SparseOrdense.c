#include<stdio.h>
int main()
{
    int a[3][3]={0,2,0,0,5,6,0,8,9},i,j,count=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]==0)
                count++;
        }
    }
    if(count==(3*3)/2)
        printf("Sparse");
    else
        printf("Dense");
    return 0;
}
