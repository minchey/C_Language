#include <iostream>

using namespace std;

int main()
{
    int num, i;
    int sum;
    while(1){
        sum =0;
        cin >> num;
        if(num ==-1) break;
        for(i =1 ; i <num; i++){
            if(num%i ==0) sum += i;
        }
        if(sum != num) cout << num << " is NOT perfect." << endl;
        else{
            cout << num <<" = 1";
            for(int j = 2; j<num; j++){
                if(num%j==0){
                    cout << " + " << j;
                }
            }
            cout << endl;
        }
    }

    return 0;
}
