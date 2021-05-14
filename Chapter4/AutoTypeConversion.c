#include <stdio.h>

int main()
{
	/*
		대입연산의 전달과정에서 발생하는 자동 형 변환
	*/
	int int1 = 500;
	char chr1 = int1; // int형 변수 int1에 저장된 값이 char형으로 자동 형 변환
	printf("%d, %d\n", chr1, int1);	//-12, 500 //그러나 500(10) = 111110100(2)이므로 11110100(2)으로 손실이 발생하고 -12으로 변한다. 12(10) = 00001010(2) 

	long lon1 = int1;
	printf("%d, %d\n\n", lon1, int1); //500, 500



	/*
		정수의 승격에 의한 자동 형변환

		CPU가 처리하기에 가장 적합한 크기의 정수 자료형을 int로 정의한다. 따라서 int형 연산의 속도가 다른 자료형의 연산속도에 비해서 동일하거나 더 빠르다.
		그 이유는 https://copynull.tistory.com/112 이 내용을 꽁꽁 숨기려해도 안 할 수가 없다.
		자세한 내용은 컴퓨터 구조에서... 결국 컴구, OS, 알고, 자구, DB는 프로그래머가 되려면 기본이다.
		그러므로 int보다 작은 크기를 가지는 자료형을 int로 바꾸어 계산한다.
	*/
	short sho1 = 21, sho2 = 10;
	short sho3;
	printf("%d, %d, %d, %d\n\n", sizeof(sho1), sizeof(sho2), sizeof(sho3), sizeof(sho1+sho2)); 
	//마지막만 4가 나오는 것을 알 수 있다. sizeof는 함수로서 매개변수를 변수로 받고 받은 변수의 바이트 크기를 보여준다.



	/*
		피연산자의 자료형 불일치로 발생하는 자동 형 변환
	*/
	double dou1 = 3.14;
	printf("%d, %d\n", sizeof(dou1), sizeof(int1));
	dou1 = dou1 + int1; 
	//정수와 실수의 연산을 요구하고 있다. 이 둘은 표현 방식이 달라서 덧셈이 불가능하다. 하지만 int1을 실수형으로 형변환 시키기 때문에 가능하다.
	//그런데 dou1을 형변환하면 왜 안될까? => 소수점 밑이 짤린다.
	printf("%f", dou1);
	return 0;
}