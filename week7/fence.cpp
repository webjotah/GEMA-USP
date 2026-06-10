#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int sum = 0, mn = 0, index;
    vector<int> v(n);

    for(int i = 0; i < n; i++) cin >> v[i];

    for(int i = 0; i < k; i++) sum += v[i];

    mn = sum;
    int i = 0;
    index = 0;

    for(int j = k; j < n; j++){
        sum += v[j];
        sum -= v[i];
        if(mn > sum){
            index = i+1;
            mn = sum;
        }
        i++;
    }

    cout << index+1 << endl;
    

}