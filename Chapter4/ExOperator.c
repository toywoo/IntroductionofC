#include <stdio.h>

void main()
{
    int num1 = 6, num2 = 3;
    int result1, result2, result3, result4, result5, result6;

    /*
        대입연산자
    */
    num1 = num1 + num2;
    printf("\n%d\n\n", num1);

    /*
        산술 연산자
    */
    result1 = num1 + num2;
    result2 = num1 - num2;
    result3 = num1 * num2;
    result4 = num1 / num2;
    result5 = num1 % num2;
    result6 = num1 ^ num2;

    printf("%d = %d + %d\n", result1, num1, num2);
    printf("%d = %d - %d\n", result2, num1, num2);
    printf("%d = %d * %d\n", result3, num1, num2);
    printf("%d = %d / %d\n", result4, num1, num2);
    printf("%d = %d  %d\n", result5, num1, num2);
    printf("%d = %d ^ %d\n\n", result6, num1, num2);

    /*
        복합 대입 연산자
    */
    int num3 = 2, num4 = 4, num5 = 6;
    num3 += 3;
    num4 *= 3;
    num5 /= 3;

    printf("num3 += 3 => %d\nnum4 *= 3 => %d\nnum5 /= 3 => %d\n\n", num3, num4, num5);

    /*
        부호 연산자
    */
    num4 = num3;
    num4 = -num4;

    printf("%d => 부호 연산자 => %d\n\n", num3, num4);

    /*
        증가 감소 연산자
    */
    int num6 = 10, num7 = 10;

    printf("num++ : %d\n", num6++);
    printf("++num : %d\n\n", ++num7);

    /*
        관계 연산자
    */
    int num8 = 10, num9 = 15;

    result1 = (num8 > num9);
    result2 = (num8 < num9);
    result3 = (num8 == num9);
    result4 = (num8 != num9);
    result5 = (num8 >= num9);
    result6 = (num8 <= num9);

    printf("num8 > num9 : %d\n", result1);
    printf("num8 < num9 : %d\n", result2);
    printf("num8 == num9 : %d\n", result3);
    printf("num8 != num9 : %d\n", result4);
    printf("num8 >= num9 : %d\n", result5);
    printf("num8 <= num9 : %d\n\n", result6);

    /*
        논리 연산자
    */
    result1 = (num8 == 10 && num9 > 10);
    result2 = (num8 == 10 || num9 != 15);
    result3 = !(num8 == 10);

    printf("num8 == 10 && num9 > 10 : %d\n", result1);
    printf("num8 == 10 || num9 != 15 : %d\n", result2);
    printf("!(num8 == 10) : %d\n\n", result3);

    return;
}