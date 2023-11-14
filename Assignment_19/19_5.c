#include<stdio.h>

void pattern(int iCol, int iRow)
{
    int i = 0, j = 0, iCount = 0;
    char ch = 'A';
    for(i = iCol; i > 0; i--)
    {
        for(j = 0; j < iRow; j++)
        {
            iCount++;
            printf(" %d ",iCount);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of Columns and Rows : \n");
    scanf("%d %d",&iValue1, &iValue2);

    pattern(iValue1, iValue2); 

    return 0;
}