#include<stdio.h>

void Number(int iNo)
{
    if(iNo <= 50)
    {
        printf("Small...\n");
    }
    else if(iNo > 50 && iNo <= 100)
    {
        printf("Medium...\n");
    }
    else if(iNo > 100)
    {
        printf("Large...\n");
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

    Number(iValue);

    return 0;
}