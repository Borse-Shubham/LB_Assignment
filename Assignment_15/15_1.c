#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iLength, int iFind)
{
    int iCnt = 0, iSum = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iFind)
        {
            iSum++;
        }
    }
    if(iSum > 0)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

int main()
{
    int *ptr = NULL;
    int iSize = 0, iCnt = 0;
    bool bRet = 0;
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

    bRet = Check(ptr, iSize, iValue);

    if(bRet == true)
    {
        printf("Number is Present...");
    }
    else
    {
        printf("Number is not present...");
    }

    free(ptr);

    return 0;
}