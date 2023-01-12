#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
    int percentage = 95; //강화확률
    srand(time(NULL)); // 난수생성

    int weapon =0; //강화등급
    char answer; //강화 진행여부
    while(1) {
        answer = 'a'; //ansewr 값 초기화
        rand() % 100 +1;
        if(rand() % 100 +1 > percentage) {
            printf("강화에 실패하였습니다. 무기가 파괴됩니다.\n");
            break;
        } else if(rand() % 100 +1 <=percentage) {
            weapon++; //성공시 강화등급 1 증가
            printf("강화에 성공하였습니다! 현재 강화등급 +%d \n",weapon);
            percentage -= 5; //다음 강화 확률 5 감소
        }
        printf("강화를 더 하시겠습니까? 다음 강화확률 %d\% Y/N ",percentage);
        scanf("%c",&answer); //강화 진행여부 입력
        getchar(); //입력버퍼 제거를 위해 작성
        if(answer=='y') {
            continue;
        } else {
            printf("강화를 멈춥니다. 현재 무기 강화는 +%d\n",weapon);
            break;
        }

    }
    return 0;
}
