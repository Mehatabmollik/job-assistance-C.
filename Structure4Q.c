#include<stdio.h>

struct Employee
{
    char name[15];
    int id ;
    int salary;
};

int main()
{
    struct Employee e[10];
    int i,max;
    for(i=0;i<10;i++)
    {
        printf("Enter %d name:\n",i+1);
        fflush(stdin);
        gets(e[i].name);
        printf("Enter your id:\n");
        scanf("%d",&e[i].id);
        printf("Enter your salary:\n");
        scanf("%d",&e[i].salary);

    }

    for(i=0;i<10;i++)
    {
        printf("Employee name:%s\n\n",e[i].name);
        printf("Employee id:%d\n\n",e[i].id);
        printf("Employee salary:%d\n\n",e[i].salary);

    }
    max=0;
    for(i=0;i<10;i++)
    {
        if(max<e[i].salary)
        {
            max=e[i].salary;
        }
    }
    printf("Max salary %d\n",max);
    return 0;
}
