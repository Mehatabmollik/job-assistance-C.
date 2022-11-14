#include<stdio.h>

int main()
  {
      int x,i,flag;
      for(x=2;x<=100;x++){
        flag=0;
      for(i=2;i<x;i++)
      {
          if(x%i==0){
            flag++;
            break;
          }
      }
      if(flag==0 && x!=1)
        printf("%d\n",x);

      }
      return 0;
  }

