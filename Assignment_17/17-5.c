#include<stdio.h>

void pattern(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= (iNo * 2); iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d ",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number of elements : \n");
    scanf("%d",&iValue);

    pattern(iValue);

    return 0;
}