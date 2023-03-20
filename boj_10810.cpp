#include <iostream>

using namespace std;

int main()
{
    int num[100] = {0,0,};
    int N,M;
    int i,j,k;
    cin >> N >>M;
    for(int a = 0; a<M;a++){
        cin>> i >> j >> k;
        num[i-1] = k;
        for(i;i<j;i++){
            num[i] = k;
        }
    }
    for(int a=0; a<N; a++){
        cout<< num[a]<< " ";
    }
    cout << endl;

    return 0;
}
