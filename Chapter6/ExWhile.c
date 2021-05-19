#include <stdio.h>

void main()
{
    int i = 1; //관례적으로 i, j, k를 사용한다. 벡터 때문인 듯 x축 벡터를 i ...
    int result = 0;
    while (i<4358) // 조건문 0, False이면 1, True이면 아래 식을 작동시킨다.
    {
        result = result + i; //구현부 어떤 것을 반복할 것인지 구현한다.
        i++;
    } // 즉 while문에는 무엇을 반복할 지와 그에 맞는 조건 설계(False로 어떻게 만들까? 어떨 때 True가 되게 할까)가 관건이다.
    printf("result: %d", result);
}