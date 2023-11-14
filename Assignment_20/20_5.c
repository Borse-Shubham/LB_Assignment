#include<stdio.h>

void pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iCount = 2;
    char ch = 'a';
    for(i = 1; i <= iCol; i++)
    {
        iCount = i;
        for(j = 1; j <= iRow; j++)
        {
            printf(" %d ",iCount);
            iCount++;
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