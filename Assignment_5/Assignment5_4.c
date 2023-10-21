#include<stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
	int iMult = 0;

	if(iNo1 == 0 || iNo2 == 0 || iNo3 == 0)
	{
		printf("Zero is Not Allowed...\n");
		return 0;
	}
	else
	{
		iMult = iNo1 * iNo2 * iNo3;
		return iMult;
	}
}

int main()
{	
	int iNum1 = 0, iNum2 =0, iNum3 =0, iRet = 0;

	printf("Enter the Numbers : \n");
	scanf("%d %d %d", &iNum1, &iNum2, &iNum3);

	iRet = Multiply(iNum1, iNum2, iNum3);

	printf("Multiplication is : %d\n",iRet);
	
	return 0;
}