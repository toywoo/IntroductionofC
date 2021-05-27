#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[10];
    int startornot;
    int random = rand()%10, number;//랜덤 숫자를 만드는 함수이고 
		//0~32767사이 값이 나오는데 한 자리만 필요하므로 10로 나누어주면 
		//나머지는 0~9가 나온다.
    printf("----------Find your Number----------\n\n");
    printf("What is your name?\n");
    scanf("%s", name);
    printf("Hello, %s\n", name);
    printf("You can enter a single digit number.\n");
    printf("You can enter it three times.\n");
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
    printf("Choice your number! %s\n", name);
    scanf("%d", &number);
    if (number == random)
    {
        printf("Congratulation!\n");
        printf("You have found hidden number.");
    }
    else
    {
        printf("You didn't find the hidden number.\n");
        printf("Choice your number again! %s\n", name);
        scanf("%d", &number);
        if (number == random)
        {
            printf("Congratulation!\n");
            printf("You have found hidden number.");
        }
        else
        {
            printf("You didn't find the hidden number.\n");
            printf("Be careful with your last chance! %s\n", name);
            scanf("%d", &number);
            if (number == random)
            {
                printf("Congratulation!\n");
                printf("You have found hidden number.");
            }
            else
            {
                printf("That's too bad\n");
                printf("Aim for the next chance!");
            }
        }
        
    }
    return 0;
}