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
    int i,j,temp,max;
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

    for(i=0;i<10-1;i++)
    {
        for(j=0;j<10;j++)
        {
            if(e[i].salary > e[j].salary)
            {
                temp=e[i].salary;
                e[i].salary=e[j].salary;
                e[j].salary=temp;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("Salary After sort %d\n",e[i].salary);
    }

   return 0;
}

