#include<stdio.h>
#include<string.h>

void Display(int iNo)
{
    int iCnt = 0;
    char* Brr[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

    if (iNo >= 0 && iNo <=9)
    {
    for (iCnt = 0; iCnt < 10; iCnt++)
    {
        if (iCnt == iNo)
        {
            printf(" %s ",Brr[iCnt]);
            break;
        }
    }
    }
    else 
    {
        printf("Invalid Input...\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}