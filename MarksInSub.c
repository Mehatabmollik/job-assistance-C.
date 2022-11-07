#include<stdio.h>
int main()
{
    float s1,s2,s3,s4,s5,total,percent;
    printf("Enter Marks of 5 Subject:\n");
    scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
     total=s1+s2+s3+s4+s5;

     printf("Total marks is %f\n",total);
         percent=(total/500)*100;
     if((percent>=33))

        printf("You are passed\n");

     else if((percent<33))
        printf("Sorry ,You are failed\n");

     return 0;
}
