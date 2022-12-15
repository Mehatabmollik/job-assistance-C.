#include<stdio.h>
int Num (int a)
{
    int i;
        for(i=2;i<a;i++)
            if(a%i==0)
               return 0;
            return 1;

}

int main()
{
    int n,x=2;
    printf("Enter a no:\n");
    scanf("%d",&n);
    while(n)
    {
        if(Num(x))
        {
            printf("%d ",x);
            n--;
        }
        x++;
    }
    return 0;
}

