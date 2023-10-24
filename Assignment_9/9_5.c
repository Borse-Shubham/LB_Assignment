#include<stdio.h>

double FeetSquare(float fNo)
{
    double dMet = 0;
    
    dMet = (0.0929 * fNo);
    return dMet;
}

int main()
{
    float fValue = 0;
    double dRet = 0;

    printf("Enter Area in Square Feet : \n");
    scanf("%f",&fValue);

    dRet = FeetSquare(fValue);

    printf("The Area in Square Meter is : %lf\n",dRet);

    return 0;
}