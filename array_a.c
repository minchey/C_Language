#include <stdio.h>
int main(void)
{
    int a,b,sum=0,c=0; //필요한 변수 설정
    
    scanf("%d\n",&a); //배열 길이 입력받기
    int array[a]; //a길이 만큼의 배열 만들기
    for(c;c<a;c++) // 배열 요소 채워주기
    {
        scanf("%d\n",&array[c]);
    }
    scanf("%d",&b); //갯수 필요한 숫자 입력
    for(c=0;c<a;c++) //배열의 요소가 b와 같으면 sum 증가
    {
        if(array[c]==b)
        {
            sum+=1;
        }
    }
    printf("%d",sum);

	return 0;
}
