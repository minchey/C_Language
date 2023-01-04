#include <stdio.h>

int main()
{
    int i,j,k, floor;
    printf("원하는 피라미드의 층을 말해라:");
    scanf("%d",&floor); //피라미드 층 입력
    for(i =0;i<floor;i++)
    {
        for(j=0;j<floor-i;j++) //floor 에서 i의 값만큼 뺀 만큼 띄우기
        {
            printf(" ");
        }
        for(k=0;k<i*2+1;k++) //각 층마다 *의 갯수는 i 의 두배에 하나를 더 한 만큼
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
