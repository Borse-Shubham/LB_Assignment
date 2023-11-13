#include<stdio.h>

void pattern(int iCol, int iRow)
{
    int i = 0, j = 0;
    for(i = 1; i <= iRow; i++)
    {
        for(j = iCol; j > 0; j--)
        {
            printf(" %d ", i);
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