#include<stdio.h>
int main()
{

    int num = 10;
    int * ptr;//You can write the address variable at initial point
    ptr = &num;//After declare when you initial dont use datatype

    printf("Address of num = %d\n", &num);//Address of num variable
    printf("Value of num = %d\n", num);//Value of num variable =10

    printf("Address of ptr = %d\n", &ptr);//Address of pointer
    printf("Value of ptr = %d\n", ptr);//1st & 4th will same o/p
    printf("Value pointed by ptr = %d\n", *ptr);//2nd & 5th same o/p

    return 0;

    //demonstrate of pointer handle
}
