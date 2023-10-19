#include<stdio.h>

void PrimeEvenFactors(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        return;
    }
    else if(iNo%2==0) 
    {
        for(iCnt=2; iCnt <= (iNo/2); iCnt++)
        {
            if((iNo % iCnt)==0 && ((iCnt %2 )==0))
            {
                printf(" %d ",iCnt);
            }
        }
       
    }
    else
    {
        printf("Number is Prime...\n");
    }

}
    

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    PrimeEvenFactors(iValue);

    return 0;
}