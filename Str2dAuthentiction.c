#include<string.h>
#include<stdio.h>
int main()
{
    char s[3][2][15]={{"hiya","987"},{"ruhan","786"},{"sanu","234"}};
    int i,count=0;
    char user[]="ruhan";
    char name[]="786";
    for(i=0;i<3;i++)
    {
        if((strcmp(s[i][0],user)==0) &&(strcmp(s[i][1],name)==0)){
            printf("Login Succeesfull\n");
                   count++;
        }
    }
    if(count==0)
        printf("Error Wrong ID");
    return 0;
}
