#include <stdio.h>

int main()
{
    char array1[50];
    int i=0,len=0;
    printf("입력:");
    scanf("%s",array1);
    while(1)
    {
        if(array1[i]=='\0')
        break;
        i++;
        len++;
    }
    for(i=len;i>=0;i--)
    {
        printf("%c",array1[i]);
    }
    printf("\n");

    return 0;
}
