#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0;

    iMeter = iNo * 1000;

    return iMeter;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter KM : \n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("The Distance in Meters is : %d\n",iRet);
    return 0;
}