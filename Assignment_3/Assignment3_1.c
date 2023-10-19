#include<stdio.h>

void printEven(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        return;
    }
    else
    {
        for(iCnt=2; iCnt <= (iNo*2); iCnt+=2)
        {
            printf(" %d ",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    printEven(iValue);

    return 0;
}