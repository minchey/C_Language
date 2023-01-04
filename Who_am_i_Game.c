#include <stdio.h>

int main()//인적사항 작성 프로그램
{
    int age; //나이변수
    double weight, height;//몸무게, 키 변수
    char name[256];// 이름 입력을 위한 문자배열
    printf("이름이 무엇입니까?:");
    scanf("%s",name);
    printf("몇 살 입니까?:");
    scanf("%d",&age);
    printf("키가 몇cm입니까?:");
    scanf("%lf",&height);
    printf("몸구게가 몇kg 입니까?:");
    scanf("%lf",&weight);
    printf("입력자 정보\n");
    printf("이름 : %s\n",name);
    printf("나이 : %d\n",age);
    printf("키 : %.2lf\n",height);
    printf("몸무게 : %.2lf\n",weight);
    return 0;
}
