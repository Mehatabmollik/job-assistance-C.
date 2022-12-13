#include<stdio.h>
int main()

{
    int year;
    printf("Enter month no:\n");
    scanf("%d",&year);
    switch((year%4==0 && (year%400==0) || (year%100!=0)))
    {
        case 0:printf("Year is not Leap year:\n");
                break;
        case 1:printf("Year is leap year:\n");
                break;
         default:printf("\Invalid\n");
    }
}
