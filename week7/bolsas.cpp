#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<pair<int, int>> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i].second >> v[i].first;
    }

    sort(v.begin(), v.end());

    int tempo = 0, atraso = 0;

    for(auto it : v){
        tempo += it.second;
        if(tempo-it.first > 0){
            atraso = max(atraso, tempo-it.first);
        }
    }

    cout << atraso << endl;
}