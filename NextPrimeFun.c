#include<stdio.h>
int nextprime(int n)
{
    int i,j,flag=0;
    for(i=n;i>0;i++)
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

    if(flag==0){
      printf("Next Prime is=%d:\n",i);
                break;
       }
    }
      return 0;
}
int main()
{
    int a;
    printf("Enter a no:\n");
    scanf("%d",&a);
    nextprime(a);

    return 0;
}
