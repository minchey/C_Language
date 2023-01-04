#include <stdio.h>
#include <time.h>
#include <stdlib.h> //rand함수를 사용하기위해 필요
int main()//가위바위보 게임
{
    char user[256];
    printf("사용자:");
    scanf("%s",user);
    srand(time(NULL));// srand의 인자로 time을 넣어주는게 좋다 1970/01/01 이후에 1초단위 시간
    int i = rand() %3; //0~2 반환 
    switch (i)
    {
    case 0: printf("상대: 가위\n"); break;
    case 1: printf("상대: 바위\n"); break;
    case 2: printf("상대: 보\n"); break;
    default: printf("몰라요\n");
    }
    return 0;
}
