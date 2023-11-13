#include<stdio.h>
#include<stdlib.h>

void Digit(int Arr[], int iLength)
{
    int iCnt1 = 0, iCnt2 = 0, iNo = 0, iDigit = 0;

    for(iCnt1 = 0; iCnt1 < iLength; iCnt1++)
    {
        iNo = Arr[iCnt1];
        for(iCnt2 = 0; iCnt2 < iNo; iCnt2++)
        {
            iDigit = iNo % 10;
            iNo = iNo / 10;
            if(iDigit % 3 == 0)
            {
                printf("%d ",Arr[iCnt1]);
            }
        }

    }
}

int main()
{
    int *ptr = NULL;
    int iSize = 0, iCnt = 0;
    
    printf("Enter the number of elements : \n");
    scanf("%d",&iSize);

    ptr =  (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory...\n");
    }

    printf("Enter the %d elements : \n",iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter the Elements no %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    Digit(ptr, iSize);

    free(ptr);

    return 0;
}