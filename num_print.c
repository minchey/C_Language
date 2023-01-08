#include<stdio.h>
int main(void)
{
    int num,backnum; //숫자 백업용변수
    int digits =0,i,j;
    int op=1; //입력받은 숫자 자릿수 확인
    scanf("%d",&num);
    backnum = num;
    while(1)//입력받은 숫자 자릿수 확인
    {
        if(num/op ==0)
            break;
        op *=10;
        digits ++;
    }
    for(i=digits;i>0;i--)
    {
        int innerDigits = 1;
        for(j=1;j<i;j++)//몇번째 자릿수부터 출력할건지 구하기
        {
            innerDigits *=10;
        }
        for(j=i;j>0;j--)
        {
            printf("%d",num/innerDigits);
            num -= ((num/innerDigits) * innerDigits);
            if(j==i)
            {
                backnum = num;
            }
            innerDigits /=10;//자릿수 하나씩 빼기
        }
        num = backnum;//남은 숫자 백업
        printf("\n");
    }
    return 0;
}
