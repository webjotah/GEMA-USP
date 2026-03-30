#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    cout << "N[" << 0 << "] = " << n << endl;
    for(int i = 1; i < 10; i++){
        n = n*2;
        cout << "N[" << i << "] = " << n << endl;
    }
}