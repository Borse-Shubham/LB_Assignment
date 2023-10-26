#include<stdio.h>

void MultDigits(int iNo)
{
    int iDigit = 0;
    int iSum1 = 0;
    int iSum2 = 0;             // 110

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit % 2 == 0)
        {
            iSum1 = iSum1 + iDigit;
        }
        else
        {
            iSum2 = iSum2 + iDigit;
        }
        iNo = iNo / 10;
    }
    printf("%d ",iSum1 - iSum2);
}

int main()
{
    int iValue  = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    MultDigits(iValue);

    return 0;
}