#include<stdio.h>

struct student
{
    char name[15];
    int classe;
    int rollno;
};

int main()
{
    struct student s[10];
    int i;

    for(i=0;i<10;i++)
    {
    printf("Enter name:\n");
    fflush(stdin);
    gets(s[i].name);
    fflush(stdin);
    printf("Enter your class:\n");
    scanf("%d",&s[i].classe);

    printf("Enter your roll no:\n");
    scanf("%d",&s[i].rollno);
    }

    for(i=0;i<10;i++)
    {
        printf("Student Name %s\nClass %d\nRoll no:\n",s[i].name,s[i].classe,s[i].rollno);

    }
   return 0;
}
