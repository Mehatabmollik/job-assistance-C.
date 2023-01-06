#include<stdio.h>

struct marks
{
    char name[15];
    int rollno;
    int chemmarks;
    int mathsmarks;
    int phymarks;
};

int main()
{
   struct marks m[5];

   int i;


   for(i=0;i<5;i++)
   {
       printf("Enter %d student name:\n",i+1);
       fflush(stdin);
       gets(m[i].name);
       fflush(stdin);

       printf("Enter roll no:\n");
       scanf("%d",&m[i].rollno);

       printf("Enter chemistry marks:\n");
       scanf("%d",&m[i].chemmarks);

       printf("Enter maths marks:\n");
       scanf("%d",&m[i].mathsmarks);

       printf("Enter physics marks:\n");
       scanf("%d",&m[i].phymarks);

   }
   printf("\n");

   for(i=0;i<5;i++)
   {
 float per=(m[i].chemmarks + m[i].mathsmarks + m[i].phymarks)/3.0;

    printf("student name:%s\n",m[i].name);
    printf("Roll no %d\n",m[i].rollno);
    printf("Percentage is %f\n",per);
   }
  return 0;

}
