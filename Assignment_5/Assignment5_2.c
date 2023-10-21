#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0


BOOL ChkGreater(int iNo)
{
    if (iNo > 100)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if (bRet == TRUE)
    {
        printf("Greater...\n");
    }
    else if(bRet == FALSE)
    {
        printf("Smaller...\n");
    }
    else
    {
        printf("Invalid Input...");
    }

    
    return 0;
}