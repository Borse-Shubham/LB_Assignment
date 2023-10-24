#include<stdio.h>

double RecArea(float fNo1, float fNo2)
{
    double dArea = 0;

    dArea = fNo1 * fNo2;

    return dArea;
}

int main()
{
    float fValue1 = 0.0;
    float fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter Length : \n");
    scanf("%f",&fValue1);

    printf("Enter Height : \n");
    scanf("%f",&fValue2);

    dRet = RecArea(fValue1, fValue2);

    printf("Area of Rectangle is : %lf\n",dRet);
    return 0;
}