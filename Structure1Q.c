#include<stdio.h>

struct Employee
{
    int id;
    char name[15];
    int salary;
};

int main()
{
    struct Employee e={121356477,"mehatab",1100};

    printf("Employee id =%d\nname is %s\nsalary is %d",e.id,e.name,e.salary);

  return 0;
}
