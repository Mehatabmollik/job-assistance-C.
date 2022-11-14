#include<stdio.h>
int main()
  {
      int j,i,a,flag=0;
      printf("Enter The no:\n");
      scanf("%d",&a);
      for(i=a;i>0;i++)
      {
       flag=0;
       for(j=2;j<i;j++)
       {
           if(i%j==0){
            flag++;
            break;
           }
       }

           if(flag==0){
           printf("Next prime is=%d\n ",i);
           break ;
           }
      }
      return 0;
  }



