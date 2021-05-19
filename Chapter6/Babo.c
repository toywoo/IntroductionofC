#include <stdio.h>

void main()
{
    int result=0 , num=1;
    
    result = result + num;
    num++;

    result = result + num;
    num++;

    //... 위와 같은 코드 뭉탱이 4355번

    // 가우스와 같은 생각을 하고 살았다면?
    result = 0;
    result = (1+4357)*4357/2;

    printf("%d\n", result);

    return; // 눈치가 있다면 void라는 것도 알아챘을 것이고 사실은 이것도 쓰지 않아도 된다.

}