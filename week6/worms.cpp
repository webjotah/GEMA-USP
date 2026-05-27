#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, aux; cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++){
        if(i == 0){
            cin >> v[i];
        } else {
            cin >> v[i];
            v[i]+=v[i-1];
        }
    }

    cin >> k;
    while(k--){
        cin >> aux;
        auto it = lower_bound(v.begin(), v.end(), aux);
        int index = it - v.begin();
        cout << index+1 << endl;
    }


    
}