#include<stdio.h>

void EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iSum1 = 1;
    int iSum2 = 1;

    for(iCnt=iNo; iCnt >= 0; iCnt--)
    {
        if((iCnt % 2)!=0)
        {
            iSum1 = iSum1 * iCnt;
        }
        else
        {
            iSum2 = iSum2 + iCnt;
        }
    }

    printf("%d ",iSum1 - iSum2);

}
    

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    EvenFactorial(iValue);

    return 0;
}