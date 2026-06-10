#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, cont = 0, mx = 0; cin >> n;
    vector<pair<int, bool>> v;

    for(int i = 0; i < n; i++){
        int a, b; cin >> a >> b;
        v.push_back({a, true});
        v.push_back({b, false});
    }

    sort(v.begin(), v.end());

    for(auto par : v){
        if(par.second) cont++;
        else cont--;

        mx = max(cont, mx);
    }

    cout << mx << endl;
}