#include<stdio.h>
#include<string.h>

int main(void){
    int test,sum,score;
    char str[100];
    scanf("%d",&test);
    for(int i = 0; i<test;i++){
        sum = 0;
        score =1;
        scanf("%s",str);
        for(int j =0; j<strlen(str);j++){
            if(str[j]=='O'){
                sum += score;
                score++;
            }
            if(str[j]=='X'){
                score =1;
            }
            
        }
        printf("%d\n",sum);
    }
    
    return 0;
}
