#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    int arr[10000];
    int idx =0;
    cin >> num1 >> num2;
    for(int i = 1; i<=num1; i++){
        if(num1%i==0){
            arr[idx] = i;
            ++idx;
        }
    }
    if(num2 <= idx+1) cout << arr[num2-1] << endl;
    else cout << 0 << endl;

    return 0;
}
