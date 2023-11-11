#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] <= iEnd && Arr[iCnt] >= iStart)
        {
            printf("%d ",Arr[iCnt]);
        }
    }
}

int main()
{
    int *ptr = NULL;
    int iSize = 0, iCnt = 0;
    int iValue1 = 0, iValue2 = 0;
    
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
        printf("Enter the Element no %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the Range of Numbers : ");
    scanf("\n%d  %d",&iValue1,&iValue2);

    Range(ptr, iSize, iValue1, iValue2);

    free(ptr);

    return 0;
}