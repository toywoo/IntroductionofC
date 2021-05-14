#include <stdio.h>

int main()
{
	int num1 = 3, num2 = 4;
	double divResult;
	divResult = num1 / num2;
	printf("Division Result: %f\n\n", divResult); // 0.000000


	divResult = (double)num1 / num2; // 명시적 형 변환
	printf("Division Result: %f", divResult);// 0.750000F
	return 0;
}