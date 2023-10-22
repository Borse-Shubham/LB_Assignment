#include<stdio.h>

#define Dollar 70

int DollarToINR(int iNo)
{
    return iNo * Dollar;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Currency in Dollar : \n");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Amount in INR is : %d ₹\n",iRet);

    return 0;
}