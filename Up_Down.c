#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()//업다운게임
{
    int num, answer =0, chance =5;
    srand(time(NULL));
    num = rand() % 100+1; //랜덤숫자 생성
    while(1)
    {
        printf("숫자를 입력하세요: ");
        scanf("%d",&answer);
        if(answer>num)
        {
            printf("DOWN ↓ 남은기회 %d번\n",--chance);
        }
        else if(answer<num)
        {
            printf("UP ↑ 남은기회 %d번\n",--chance);
        }
        else if(answer==num)
        {
            printf("정답입니다!");
            break;
        }
        if(chance==0)
        {
            printf("실패했습니다 정답은 : %d였습니다!",num);
            break;
        }
    }

    return 0;
}
