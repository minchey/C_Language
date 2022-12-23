#include <stdio.h>

int main ()
{
    for(int i=2;i<=30;++i)//원하는 수 범위
    {
        int b =0;
        for(int j=2;j<i;++j)//소수 구하는 반복문
        {
            if(i%j==0)//소수가 아닐때 b +1
            {
                b +=1;
                break;
            }
        }
        if(b==0)//소수이면 i를 출력
        {
            printf("%d\n",i);
        }
        int j =2;//j값 초기화
    }
    return 0;
}
