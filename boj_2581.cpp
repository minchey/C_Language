#include <iostream>
 using namespace std;
 
 int main(){
     int M,N;
     int min = 10000;
     int sum = 0;
     cin >> M;
     cin >> N;
     for(int i = M; i<=N; i++){
         for(int j = 2; j<i; j++){
             if(i % j ==0) break;
             if(j == i-1&& i%j != 0){
                 sum += i;
                 if(i<min) min =i;
             }
         }
         if(i == 2) {
             sum+=2;
             min =2;
         }
     }
     if(sum ==0) cout << -1 << endl;
     else cout << sum << endl << min << endl;
     return 0;
 }
