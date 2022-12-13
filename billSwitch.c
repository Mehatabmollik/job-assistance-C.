#include<stdio.h>
int main()
{

    int unit=120;
    double total,finaltotal;
    switch(unit>50)
    {
        case 1:switch(150<unit)
               {
                   case 0:total=25+(unit-50)*0.75;
                           break;
                   case 1:total=25+75+(unit-50)*1.2;
                           break;

               }break;
        case 0:total=unit*.5;
                break;
    }
    finaltotal=total+total*.2;
    printf("Final total is =%lf",finaltotal);
    return 0;
}
