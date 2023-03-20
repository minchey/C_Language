#include <iostream>

using namespace std;

int main()
{
    char arr[100] = "long";
    int num;
    cin >> num;
    if(num % 4 ==0){
        for(int i =0; i < num/4; i++){
            cout<< arr <<' ';
        }
    }
    cout << "int" << endl;

    return 0;
}
