#include <stdio.h>
#include <stdlib.h>

char Name[10];
int attemps=1;

char* EnterName() //치트키 써서 미안하다... 나중에 문자열을 배우면서 공부해보자!
{
    printf("What is your name?\n");
    scanf("%s", Name);
    printf("Hello, %s\n", Name);
    return Name;
}

void StartorNot()
{
    int startornot;
    printf("You Ready?\n");
    printf("Yes: 1, NO: 2 :: ");
    scanf("%d", &startornot);
    switch (startornot)
    {
    case 1:
        printf("We start \'Find your Nunber\'\n\n");
        break;
    case 2:
        exit(0);//프로그램 종료
        break;
    }
}

void CheckNumber(int random)
{
    int number;
    switch (attemps)
    {
    case 1:
        printf("Choice your number! %s\n", Name);
        scanf("%d", &number);
        break;
    case 2:
        printf("You didn't find the hidden number.\n");
        printf("Choice your number again! %s\n", Name);
        scanf("%d", &number);
        break;
    case 3:
        printf("You didn't find the hidden number.\n");
        printf("Be careful with your last chance! %s\n", Name);
        scanf("%d", &number);
        break;
    }

    if (number == random)
    {
        printf("Congratulation!\n");
        printf("You have found hidden number.");
        exit(0);
    }
}

int main()
{
    int random = rand()%10;//랜덤 숫자를 만드는 함수이고 0~32767사이 값이 나오는데 한 자리만 필요하므로 10로 나누어주면 나머지는 0~9가 나온다.
    printf("----------Find your Number----------\n\n");
    EnterName();
    printf("You can enter a single digit number.\n");
    printf("You can enter it three times.\n");
    StartorNot();
    while (attemps<4)
    {
        CheckNumber(random);
        attemps++;
    }
    printf("That's too bad\n");
    printf("Aim for the next chance!");
    return 0;
}