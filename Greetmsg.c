#include<stdio.h>
int main()

{
    int x;
    printf("Enter day no:\n");
    scanf("%d",&x);
    switch(x)
    {
        case 1:printf("Welcome to Monday\n");
                break;
        case 2:printf("Hello it's Tuesday:\n");
                break;
        case 3:printf("Wednesday have mid of day in week:\n");
                break;
        case 4:printf("Thursday is tired:\n");
                break;
        case 5:printf("Friday finish the work:\n");
                break;
        case 6:printf("Saturday is shining:\n");
                break;
        case 7:printf("Hurrah its Sunday:\n");
                break;
        default :printf("Give the correct day no");
    }
   return 0;
}
