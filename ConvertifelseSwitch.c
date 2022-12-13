#include<stdio.h>
int main()

{
    int var;
    printf("Enter month no:\n");
    scanf("%d",&var);
    switch(var)
    {
        case 1:if(var==1)
            printf("Good:\n");
                break;
        case 2:if(var==2)
            printf("better:\n");
                break;
        case 3:if(var==3)
            printf("best:\n");
                break;
        default:printf("\nInvalid\n");
    }
    return 0;
}



