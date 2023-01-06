#include<stdio.h>

struct student
{
    char name[15];
    int classe;
    int rollno;
};

int main()
{
    int n;
    printf("Enter no of records:\n");
    scanf("%d",&n);
    struct student s[n];
    int i;

    for(i=0;i<n;i++)
    {
    printf("Enter %d name:\n",i+1);
    fflush(stdin);
    gets(s[i].name);
    fflush(stdin);

    printf("Enter your class:\n");
    scanf("%d",&s[i].classe);

    printf("Enter your roll no:\n");
    scanf("%d",&s[i].rollno);
    }

    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("Student Name %s\nClass %d\nRoll no:%d\n",s[i].name,s[i].classe,s[i].rollno);

    }
   return 0;
}

