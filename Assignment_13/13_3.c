#include<stdio.h>
#include<stdlib.h>

void Difference(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 5) == 0 && (Arr[iCnt] % 2) == 0)
        {
            printf(" %d ",Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter the number of elements you wnat to enter : \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory...\n");
        return -1;
    }

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {   
        printf("Enter element no %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }
    Difference(ptr, iSize);
    
    free(ptr);

    return 0;
}