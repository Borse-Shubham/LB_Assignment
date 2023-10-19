#include<stdio.h>
#include<ctype.h>

void DisplayConvert(char cLet)
{
    if (islower(cLet))
    {
        cLet = toupper(cLet);
        printf("%c\n",cLet);
    }
    else if (isupper(cLet))
    {
        cLet = tolower(cLet);
        printf("%c\n",cLet); 
    }
    else
    {
        printf("Wrong Input...\n");
    }
}
    

int main()
{
    char cValue = '\0';

    printf("Enter Character : \n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}