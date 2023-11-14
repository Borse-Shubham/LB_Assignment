#include<stdio.h>

void pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iCount = 2;
    char ch = 'A';
    for(i = 1; i <= iCol; i++)
    {
        for(j = 1; j <= iRow; j++)
        {
            if(i % 2 == 0)
            {
                printf(" %d ",j);
            }
            else
            {
                printf(" %d ",iCount);
                iCount += 2;
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