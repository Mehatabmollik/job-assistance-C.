#include<stdio.h>
#include<string.h>
int main()
{
    char ip[]="11.32.244";
    char *a=strtok(ip,".");
    while(a!=NULL)
    {
        int x=atoi(a);
        if((x>=0) && (x<=255))
            printf("%d ",x);
        a=strtok(NULL,".");
    }
return 0;

}
