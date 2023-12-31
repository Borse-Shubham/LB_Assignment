#include<stdio.h>

typedef int BOOL;

#define true 1
#define false 0

BOOL ChkZero(int iNo)
{
    int iDigit = 0;             

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return true;
        }
        iNo = iNo / 10;
    }
    return false;
}

int main()
{
    int iValue  = 0;
    BOOL bRet = false;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == true)
    {
        printf("It Contains Zero...\n");
    }
    else
    {
        printf("There is no Zero...\n");
    }

    return 0;
}