#include <stdio.h>
#include <math.h>

void main()
{
    int num1, num2, useroperator;

    printf("----------Mini Calculator----------\n\n");
    printf("계산할 수 입력\n");

    while (1)//다음 시간에 배워보도록 하자!
    {
        printf("연산자를 택해주세요\n1. 덧셈, 2. 뺄셈, 3. 곱셈, \n4. 나눗셈의 몫, 5. 거듭제곱\n\n");
        scanf("%d", &useroperator);
        
        if (useroperator < 5)
        {
            break; // While문에서 탈출 할 수 있다.
        }
        
        printf("잘못 입력하셨습니다. 다시 입력해주세요.\n\n\n"); 
    }
    
    printf("첫번째 수 입력: ");
    scanf("%d", &num1);
    printf("두 번째 수 입력 : ");
    scanf("%d", &num2);

    switch (useroperator)
    {
    case 1: //useroperator == 1?
        printf("계산 결과 %d + %d = %d\n\n", num1, num2, num1 + num2);
        break;// 아래 명령어가 실행 되지 않는다, 위에 있는 break와의 공통점을 생각해보자! 자세한 이론적인 이유는 컴퓨터 구조를 배우면 확 와닺는다.
    case 2:
        printf("계산 결과 %d - %d = %d\n\n", num1, num2, num1 - num2);
        break;
    case 3:
        printf("계산 결과 %d * %d = %d\n\n", num1, num2, num1 * num2);
        break;
    case 4:
        printf("계산 결과 %d / %d = %d\n\n", num1, num2, num1 / num2);
        break;
    case 5:
        printf("계산 결과 %d ^ %d = %d\n\n", num1, num2, pow(num1, num2));
        break;
    default:
        printf("!Error!");
        break;
    }

    return;
    
}