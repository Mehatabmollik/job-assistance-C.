#include<stdio.h>
int main()

{
    while(1){
    int choice,a,b,c;
    printf("1 :Isosceles triangle or not:\n");
    printf("2 :Right angled triangle or not:\n");
    printf("3 :Equilateral triangle or not:\n");
    printf("4 :Exit\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:printf("Enter three side  of triangle:\n");
               scanf("%d%d%d",&a,&b,&c);
                if(a==b || b==c || c==a)
                    printf("isosceles Triangle\n");
                else
                    printf("Not isosceles\n");
                break;
        case 2:printf("Enter three side of Triangle:\n");
                scanf("%d%d%d",&a,&b,&c);
                 if(a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b)
                   printf("Right angle Triangle\n");
                else
                    printf("Not Right angle\n");
                break;
        case 3:printf("Enter three side of Triangle:\n");
                scanf("%d%d%d",&a,&b,&c);
                if(a==b && b==c && c==a)
                    printf("Equilateral\n");
                else
                    printf("Not equal\n");
                break;
         case 4: return 0;
        default :printf("Invalid\n");
     }
    }
   return 0;
}
