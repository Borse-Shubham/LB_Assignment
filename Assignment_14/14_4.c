#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0, iFound = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] )== 11)
        {
            iFound++;
        }
    }
    return iFound;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter the elements you want to enter : \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the %d Elements : \n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element no %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }
    iRet = Frequency(ptr, iSize);

    printf("Frequnecy of 11 is : %d",iRet);

    free(ptr);

    return 0;
}