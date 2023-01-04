#include<stdio.h>
int main(void)
{
    int answer =0;
    int c;
    int array[9][9];
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            scanf("%d",&c);
            array[i][j]=c;
        }
    }
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(array[i][j]>answer)
            {
                answer = array[i][j];
            }
        }
    }
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(array[i][j]==answer)
            {
                printf("%d\n",answer);
                printf("%d %d",i,j);
                break;
            }
        }
    }
    return 0;
}
