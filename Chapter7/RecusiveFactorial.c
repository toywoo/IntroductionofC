#include <stdio.h>

int Factorial(int n)
{
    if (n==0)
        return 1;
    else
        return n * Factorial(n-1);
}

int main()
{
    printf("1! = %d\n", Factorial(1));
    printf("5! = %d\n", Factorial(5));
    return 0;
}