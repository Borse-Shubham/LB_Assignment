#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int iFind)
{
    int iCnt = 0, iSum = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iFind)
        {
            iSum++;
        }
    }
    return iSum;
}

int main()
{
    int *ptr = NULL;
    int iSize = 0, iCnt = 0, iRet = 0;
    int iValue = 0;
    
    printf("Enter the number of elements : \n");
    scanf("%d",&iSize);

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

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

    iRet = Frequency(ptr, iSize, iValue);

    printf("%d",iRet);

    free(ptr);

    return 0;
}