#include<stdio.h>
int main()
{
    char str[5][20];
    int i,j,vowel=0;
    printf("Enter 5 name:\n");
    for(i=0;i<5;i++)
        gets(str[i]);

    for(i=0;i<5;i++)
    {
        for(j=0;str[i][j];j++)
        {
            if((str[i][j]=='a') ||(str[i][j]=='e')||(str[i][j]=='i') ||(str[i][j]=='o')
               ||(str[i][j]=='u'))
                vowel++;
        }
    }
    printf("Vowel No is %d",vowel);
    return 0;
}
