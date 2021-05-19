#include <stdio.h>

void main()
{
    int result = 0;

    for (int i = 0; i < 4358; i++) //조건식: 무언가 While에 비해서 많아졌다. 
    //=> 초기식 ; 조건식 ; 증감식 => 초기식은 반복을 위한 변수 선언, 
    //조건식은 어떨 때 아래 식을 실행할지를 결정, 증감식은 거짓으로 만들기 위한 증가 감소 연산.
    //for문은 반복문에 필요한 모든 것을 담은 종합 반복 세트라고 할 수 있다. 
    {
        result = result + i;
    }

    printf("Result: %d", result);
}