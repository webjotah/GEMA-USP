#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    float x;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x;
        cout << fixed << setprecision(4) << sqrt(x) << endl;
    }
}