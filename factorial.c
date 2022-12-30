#include <stdio.h>
int facto(int x);
int main(void)
{
    int a, result;
    scanf("%d",&a);
    result = facto(a);
    printf("%d",result);
    return 0;
}
int facto(int x)
{
    int fac =x;
    if(x==0)
    return 1;
    return fac *facto(x-1);
}
