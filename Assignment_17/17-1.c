#include<stdio.h>

void pattern(int iChar)
{
    int iCnt = 0;
    int iAlpha = 'A';
    for(iCnt = 0; iCnt < iChar; iCnt++)
    {
        printf(" %c ",iAlpha);
        iAlpha++;
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