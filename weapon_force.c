#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
    int percentage = 95;
    srand(time(NULL));

    int weapon =0;
    char answer;
    while(1) {
        answer = 'a';
        rand() % 100 +1;
        if(rand() % 100 +1 > percentage) {
            printf("강화에 실패하였습니다. 무기가 파괴됩니다.\n");
            break;
        } else if(rand() % 100 +1 <=percentage) {
            weapon++;
            printf("강화에 성공하였습니다! 현재 강화등급 +%d \n",weapon);
            percentage -= 5;
        }
        printf("강화를 더 하시겠습니까? 다음 강화확률 %d\% Y/N ",percentage);
        scanf("%c",&answer);
        if(answer=='y') {
            printf("강화를 시작합니다.\n");
            continue;
        } else {
            
            break;
        }

    }
    printf("강화를 멈춥니다. 현재 무기 강화는 +%d\n",weapon);
    return 0;
}
