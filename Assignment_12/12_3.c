#include<stdio.h>

void CountRange(int iNo)
{
    int iDigit = 0;
    int iSum = 0;             // 110

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit >= 3 && iDigit <= 7)
        {
            iSum = iSum +1;
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

    CountRange(iValue);

    return 0;
}