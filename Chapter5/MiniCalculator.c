#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996) //scanf() 보안 에러 방지

void main()
{
    int num1, num2, useroperator;

    printf("----------Mini Calculator----------\n\n");
    printf("계산할 수 입력\n");

    while (1)
    {
        printf("연산자를 택해주세요\n1. 덧셈, 2. 뺄셈, 3. 곱셈, \n4. 나눗셈의 몫, 5. 거듭제곱\n\n");
        scanf("%d", &useroperator);
        
        if (useroperator < 5)
        {
            break;
        }
        
        printf("잘못 입력하셨습니다. 다시 입력해주세요.\n\n\n"); 
    }
    
    printf("첫번째 수 입력: ");
    scanf("%d", &num1);
    printf("두 번째 수 입력 : ");
    scanf("%d", &num2);



    if (useroperator == 1)
    {
        printf("계산 결과 %d + %d = %d\n\n", num1, num2, num1 + num2);
    }
    else if (useroperator == 2)
    {
        printf("계산 결과 %d - %d = %d\n\n", num1, num2, num1 - num2);
    }
    else if (useroperator == 3)
    {
        printf("계산 결과 %d * %d = %d\n\n", num1, num2, num1 * num2);
    }
    else if (useroperator == 4)
    {
        printf("계산 결과 %d / %d = %d\n\n", num1, num2, num1 / num2);
    }
    else if (useroperator == 5)
    {
        printf("계산 결과 %d ^ %d = %d\n\n", num1, num2, pow(num1, num2));
    }
    else
    {
        printf("!Error!");

    }

    return;
}