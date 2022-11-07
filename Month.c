#include<stdio.h>
int main()
{
    int month;
    printf("Enter the month :");
    scanf("%d",&month);
    if((month==1) ||(month==3) ||(month==5) ||(month==7) ||(month==8) ||(month==10) ||(month==12))
        printf("month has 31 days :");
    else if((month==2))
        printf("If year is leap year then 29 day otherwise month(in that year) has 28 day");
    else
        printf("Month has 30 day");
    return 0;

}
