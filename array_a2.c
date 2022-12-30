#include <stdio.h>
int main(void)
{
    int a,b,c=0; //필요한 변수 설정
    
    scanf("%d %d",&a,&b); //배열 길이 &정수 입력
    int array[a]; //a길이 만큼의 배열 만들기
    for(c;c<a;c++) // 배열 요소 채워주기
    {
        scanf("%d",&array[c]);
    }
    for(c=0;c<a;c++) //배열의 요소가 b보다 작으면 출력
    {
        if(array[c]<b)
        {
            printf("%d ",array[c]);
        }
    }

	return 0;
}
