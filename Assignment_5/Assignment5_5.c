#include<stdio.h>

float Percentage(int  iNo1, int  iNo2)
{
	float iMult = 0;

	if(iNo1 == 0 || iNo2 == 0)
	{
		printf("Zero is Not Allowed...\n");
		return 0;
	}
	else
	{
		iMult = (float)iNo1 / iNo2 * 100;
		return iMult;
	}
}

int main()
{	
	int iNum1 = 0, iNum2 =0;
	float fRet = 0.0f;

	printf("Enter the Marks Obtained and Total Marks : \n");
	scanf("%d %d", &iNum1, &iNum2);

	fRet = Percentage(iNum1, iNum2);

	printf("Percentage is  : %.2f%%\n",fRet);
	
	return 0;
}