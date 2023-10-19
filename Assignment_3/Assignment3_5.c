#include<stdio.h>
#include<stdbool.h>

bool DisplayConvert(char cLet)
{
    if (cLet == 'a'|| cLet == 'e'|| cLet == 'i'|| cLet == 'o'|| cLet == 'u'|| cLet == 'A'|| cLet == 'E'|| cLet == 'I'|| cLet == 'O'|| cLet == 'U')
    {
        return true;
    }
    else 
    {
        return false;
    }
}
    

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter Character : \n");
    scanf("%c",&cValue);

    bRet = DisplayConvert(cValue);

    if (bRet == true)
    {
    printf("%c is vovel...\n",cValue);
    }
    else
    {
        printf("%c is not a vovel...\n",cValue);
    }
    return 0;
}