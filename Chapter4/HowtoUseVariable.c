#include <stdio.h>

int main()
{
	int num1, num2;//num1, num2 선언 (스택에 메모리 할당)
	int num3 = 0; //num1 선언 및 0으로 초기화
	//printf("num1 : %d, num2 : %d, num3 : %d", num1, num2, num3); => error why? ??? 안해서 

	num1 = 1;//num1 1로 초기화
	num1 = 2; //num1 2를 대입
	num2 = 3; //num2 3을 ????

	printf("num1 : %d, num2 : %d, num3 : %d", num1, num2, num3);
	return 0;
}