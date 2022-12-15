#include<stdio.h>
void range(int a,int b)
{
    int flag=0,i,j;
    for(i=a;i<=b;i++)
    {
        flag=0;
        for(j=2;j<i;j++)
            {
                if(i%j==0)
                {
                  flag++;
                  break;
                }
            }
    if(flag==0 && i!=1)
    {
        printf("\n%d",i);
    }

    }
    return 0;
}
int main()
{
    int a,b;
    printf("Enter lower then upper bound:\n");
    scanf("%d%d",&a,&b);
    range(a,b);
    return 0;
}
