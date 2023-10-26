#include<stdio.h>

void MultDigits(int iNo)
{
    int iDigit = 0;
    int iSum = 1;             // 110

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit != 0)
        {
            iSum = iSum * iDigit;
        }
        iNo = iNo / 10;
    }
    printf("%d ",iSum);
}

int main()
{
    int iValue  = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    MultDigits(iValue);

    return 0;
}