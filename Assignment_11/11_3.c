#include<stdio.h>

void CountTwo(int iNo)
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
        if (iDigit == 2)
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

    CountTwo(iValue);

    return 0;
}