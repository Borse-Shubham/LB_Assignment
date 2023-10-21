#include<stdio.h>

typedef int BOOL;

#define true 1
#define false 0


BOOL ChkEqual(int iNo1, int iNo2)
{
    if (iNo1 == iNo2)
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
    int iValue1 = 0;
    int iValue2 = 0;
    BOOL bRet = false;

    printf("Enter Two Numbers : \n");
    scanf("%d %d",&iValue1, &iValue2);

    bRet = ChkEqual(iValue1, iValue2);

    if(bRet == true)
    {
        printf("Equal...\n");
    }
    else
    {
        printf("Not Equal...\n");
    }

    return 0;
}