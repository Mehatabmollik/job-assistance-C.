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
    printf("Enter your name:\n");
    gets(e.name);
    printf("Enter your id:\n");
    scanf("%d",&e.id);
    printf("Enter your salary:\n");
    scanf("%d",&e.salary);

  printf("Employee name:%s\nEmployee id:%d\nEmployee salary:%d\n",e.name,e.id,e.salary);

  return 0;

}
