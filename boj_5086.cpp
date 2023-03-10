#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    while(1){
        cin>>num1 >> num2;
        if(num1<num2){
            if(num2%num2 == 0) cout << "factor" <<endl;
            else cout << "neither" << endl;
        }
        else if(num1>num2){
            if(num1%num2==0) cout << "multiple" <<endl;
            else cout << "neither" << endl;
        }
        else if(num1 ==0 && num2 ==0) break;
    }

    return 0;
}
