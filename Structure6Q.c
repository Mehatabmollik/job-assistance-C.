#include<stdio.h>
#include<string.h>
struct Employee
{
    char name[15];
    int id;
    int salary;
};

int main()
{
    struct Employee e[10];

    int i,j,temp[15];

    for(i=0;i<10;i++)
    {
        printf("Enter %d name:\n",i+1);
        fflush(stdin);
        gets(e[i].name);
        fflush(stdin);
        printf("Enter your id:\n");
        scanf("%d",&e[i].id);

        printf("Enter your salary:\n");
        scanf("%d",&e[i].salary);
    }

    for(i=0;i<10-1;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(strcmp(e[i].name,e[j].name)>0)
            {
                strcpy(temp,e[i].name);
                strcpy(e[i].name,e[j].name);
                strcpy(e[j].name,temp);
            }
        }
    }

    for(i=0;i<10;i++)
    {
        printf("Name After Sort:%s\n",e[i].name);
    }

    return 0;
}
