#include<stdio.h>
int main()
{
    char str[]="Shah Rukh Khan";
    char copy[15];
    int i=0;
    while(str[i]){
        copy[i]=str[i];
      i++;
    }
    copy[i]='\0';
    printf("Copied string is =\n%s",copy);
    return 0;
}
