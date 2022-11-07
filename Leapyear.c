#include<stdio.h>
int main()
{
    int year;
    printf("Enter an year :");
    scanf("%d",&year);
    if((year%4==0) && (year%100!=0) || (year%400==0))
        printf(" %d Year is Leap Year ",year);
    else
        printf("%d Year is not Leap Year",year);
    return 0;
}
