#include<stdio.h>

void EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iSum1 = 1;
    int iSum2 = 1;

    if(iNo <= 0)
    {
        return;
    }

    else(iNo > 0)
    {
        for(iCnt=iNo; iCnt >= 1; iCnt--)
        {
            if((iCnt % 2)!=0)
            {
                iSum = iSum * iCnt;
            }
        }
    }

    printf("%d ",iSum);

}
    

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    EvenFactorial(iValue);

    return 0;
}