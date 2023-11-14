#include<stdio.h>

void pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iCount = 1;
    char ch = 'A';
    for(i = 0; i < iCol; i++)
    {
        for(j = 0; j < iRow; j++)
        {
            printf(" %d ",iCount);
            iCount++;
            if(iCount > 9)
            {
                iCount = 1;
            }
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