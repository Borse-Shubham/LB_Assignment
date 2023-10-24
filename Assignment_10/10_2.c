#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{   
    int iCnt = 0;

    if(iStart <= iEnd)
    {
        for(iCnt = iStart; iCnt <= iEnd; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
            printf(" %d ",iCnt);
            }
        }
    }
    else
    {
        printf("Invalid Input...\n");
    }

}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Starting Point : \n");
    scanf("%d",&iValue1);
    printf("Enter Ending Point : \n");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1, iValue2);

    return 0;
}