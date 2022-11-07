#include<stdio.h>
int main()
{
    int no=999;
    if((no>99) && (no<1000))
        printf("3 digit No");
    else if((no<=99) &&(no>=10))
        printf("2 Digit No");
    else if((no>=1) &&(no<=9))
        printf("1 Digit");
    return 0;

}
