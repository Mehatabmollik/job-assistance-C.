#include<stdio.h>
int main()
{
    float cp=300.0,sp=500.0;
    if(sp>cp)
        printf("Profit is %f",((sp-cp)*100)/cp);
    else
        printf("Loss is %f",((cp-sp)*100)/cp);
    return 0;
}
