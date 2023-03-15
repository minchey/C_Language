#include <iostream>
 using namespace std;
 
 int main(){
     int N;
     int num[100];
     int i,j;
     int result =0;
     cin >> N;
     for(i = 0; i<N; i++){
         cin >> num[i];
         for(j =2;j<num[i];j++){
             
             if(num[i]% j ==0) break;
             if(j == num[i]-1){
                 if(num[i]% j !=0) result++;
             }
         }
         if(num[i] == 2) result++;
     }
     cout << result << endl;
     return 0;
 }
