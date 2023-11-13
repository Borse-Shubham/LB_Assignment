#include<stdio.h>

void pattern(int iChar)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iChar; iCnt++)
    {
        printf("# %d * ",iCnt);
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