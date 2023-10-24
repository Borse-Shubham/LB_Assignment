#include<stdio.h>

double FhtoCs(float fNo)
{
    double dCelc = 0;

    dCelc =   (fNo - 32.0) * (5.0/9.0);
    return dCelc;  
}

int main()
{
    float fValue = 0;
    double dRet = 0;

    printf("Enter Temperature in Farenheit : \n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("The Temperature  is : %lf\n",dRet);

    return 0;
}