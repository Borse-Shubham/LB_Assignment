#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define true 1
#define false 0

typedef int BOOL;  

BOOL Check(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] )== 11)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int iSize = 0, iCnt = 0; 
    BOOL bRet = false;
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
    bRet = Check(ptr, iSize);

    if(bRet == true)
    {
        printf("11 is Present...\n");
    }
    else
    {
        printf("11 is Absent..");
    }

    free(ptr);

    return 0;
}