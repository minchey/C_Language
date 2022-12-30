#include <stdio.h>
int main(void)
{
    int array[28];
    int a,b,c;
    for(a=0;a<28;a++)
    {
        scanf("%d",&array[a]);
    }
    for(b=1;b<31;b++)
    {
        for(a=0;a<28;a++)
        {
            if(array[a]==b)
            {
                c+=1;
                break;
            }
            c=0;
        }
        if(c==0)
        {
            printf("%d\n",b);
        }
    }
	return 0;
}
