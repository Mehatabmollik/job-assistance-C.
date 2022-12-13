#include<stdio.h>
int main()

{
    while(1){
    int choice,x,y,z;
    printf("Enter 1 for Add no:\n");
    printf("Enter 2 for Subtract No:\n");
    printf("Enter 3 for Multiplication No:\n");
    printf("Enter 4 for Division No:\n");
    printf("Enter 5 for Exit :\n");
    scanf("%d",&choice);
    switch(choice)
    {

        case 1:printf("Enter two no to add:\n\n");
               scanf("%d%d",&x,&y);
               z=x+y;
               printf("Sum is =%d\n\n",z);
                break;
        case 2:
               printf("Enter two no to sub:\n\n");
               scanf("%d%d",&x,&y);
               z=x-y;
               printf("Sub is =%d\n\n",z);
                break;
        case 3:
               printf("Enter two no to mul:\n\n");
               scanf("%d%d",&x,&y);
               z=x*y;
               printf("Multiply is =%d\n\n",z);
                break;
        case 4:
               printf("Enter two no to div:\n\n");
               scanf("%d%d",&x,&y);
               z=x/y;
               printf("Divison is =%d\n\n",z);
                break;
        case 5:return 0;
                break;
        default :printf("Give the valid no\n");
     }
    }
   return 0;
}
