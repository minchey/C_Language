#include <stdio.h>
int main()
{
    int arry[8];
    int hol[4];
    int jjak[4];
    for(int i=0;i<8;i++)
    {
        printf("NUM%d : ",i+1);
        scanf("%d",&arry[i]);
    }
    while(1)
    {
        int j=0;
        int k=0;
        for(int i =0; i<8;i++)
        {
            if(arry[i]%2==1)
            {
                hol[j]=arry[i];
                j++;
            }
            else
            {
                jjak[k]=arry[i];
                k++;
            }
        }
        break;
    }
    printf("홀수 : %d %d %d %d \n",hol[0],hol[1],hol[2],hol[3]);
    printf("짝수 : %d %d %d %d \n",jjak[0],jjak[1],jjak[2],jjak[3]);
    return 0;
}
