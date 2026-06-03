#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    int n, m; cin >> n >> m;
    vector<int> v(n);
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    int i = 0, j = 0, cont = 0, mx = 0;

    for(int j = 0; j < n; j++){
        mp[v[j]]++;

        while(mp.size() > m){
            mp[v[i]]--;
            if(mp[v[i]] == 0){
                mp.erase(v[i]);
            }
            i++;
        }
        mx = max(mx, j-i+1);
    }


    cout << mx << endl;
}