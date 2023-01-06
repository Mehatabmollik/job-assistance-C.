#include<stdio.h>

struct Employee
{
    int id;
    char name[15];
    int salary;
};

int main()
{
    struct Employee e;

    printf("Enter name of Emp:\n");
    gets(e.name);

    printf("Enter emp id:\n");
    scanf("%d",&e.id);

    printf("Enter your salary:\n");
    scanf("%d",&e.salary);

     fun(e,e,e);

  return 0;

}
void fun(struct Employee x)
{
   printf("Employee id %d\nEmployee name %s\nEmp salary %d\n",x.id,x.name,x.salary);

}

