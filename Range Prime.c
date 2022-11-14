#include<stdio.h>

int main()
  {
      int x,i,a,b,flag;
      printf("Enter start no & Enter end no:");
      scanf("%d %d",&a,&b);
      for(x=a;x<=b;x++){
            flag=0;

      for(i=2;i<x;i++)
      {
          if(x%i==0){
            flag++;
            break;
          }
      }
      if(flag==0 && x!=1)
        printf("%d ",x);
      }
      return 0;
  }

