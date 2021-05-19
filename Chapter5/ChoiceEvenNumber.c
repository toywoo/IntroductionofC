#include <stdio.h>


void main()
{
    int num = 1;

    if (num % 2 == 0)
    {
        printf("%d는 짝수입니다.", num);
    }
    else
    {
        printf("%d는 홀수입니다.", num);
    }

    return;
}