#include<stdio.h>
void alpha(char x[])
{
    int i,count=0;
    for(i=0;x[i];i++)
    {
        if(x[i]>='0' && x[i]<='9')
            count++;
    }
    if(count>=1)
        printf("Alphanumeric");
    else
        printf("Not");
}
int main()
{
    char a[]="check@123 digit is present or not";
    alpha(a);

}
