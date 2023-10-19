#include<stdio.h>

void EvenFactors(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        return;
    }
    else if(iNo%2==0) 
    {
        for(iCnt=1; iCnt <= (iNo/2); iCnt++)
        {
            if((iNo % iCnt)==0)
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

    EvenFactors(iValue);

    return 0;
}