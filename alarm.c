#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(b>=45)
    {
        printf("%d %d\n",a,b-45);
    }
    else if(a!=0&&b<45)
    {
        printf("%d %d\n",a-1,b+15);
    }
    else if(a ==0&&b<45)
    printf("%d %d",23,b+15);
    return 0;
}
