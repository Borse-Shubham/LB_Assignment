#include<stdio.h>

double CircleArea(float iNo)
{
    double dArea = 1;

    dArea = iNo * iNo * 3.14;

    return dArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Radius : \n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is : %lf\n",dRet);
    return 0;
}