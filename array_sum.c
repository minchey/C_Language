#include<stdio.h>
int main(void)//2차원 배열 합구하기
{
    int a,b,c; //배열 크기와 값
    scanf("%d %d",&a,&b);
    int array1[a][b];
    int array2[a][b];
    int array3[a][b];
    for(int i=0;i<a;i++) //배열에 값 채우기
    {
        for(int j=0;j<b;j++)
        {
            scanf("%d",&c);
            array1[i][j]=c;
        }
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            scanf("%d",&c);
            array2[i][j]=c;
        }
    }
    for(int i=0;i<a;i++) //두 배열을 합친 값을 3번 배열에 넣기
    {
        for(int j=0;j<b;j++)
        {
            array3[i][j]=array1[i][j]+array2[i][j];
        }
    }
    for(int i=0;i<a;i++) //배열값 출력하기
    {
        for(int j=0;j<b;j++)
        {
            printf("%d ",array3[i][j]);
        }
        printf("\n");
    }
}
