#include <stdio.h>
int main(void)
{
    int a,b,c=0;
    int array[9];
    for(a=0;a<9;a++)//배열요소 채우기
    {
        scanf("%d",&array[a]);
    }
    b=array[0];//b값 배열 첫번째값으로 초기화
    for(a=0;a<9;a++)//최댓값 구하고 몇번째인지 구하기
    {
        if(b<array[a])
        {
            b= array[a];
            c= a;
        }
    }
    printf("%d\n%d",b,c+1);
	return 0;
}
