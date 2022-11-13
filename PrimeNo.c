#include<stdio.h>

int main()
  {
      int x,i;
      printf("Enter The no to be check:\n");
      scanf("%d",&x);

      for(i=2;i<x;i++)
      {
          if(x%i==0)
            break;
      }
      if(x==i)
        printf("prime");
      else
        printf("Not prime");
      return 0;
  }
