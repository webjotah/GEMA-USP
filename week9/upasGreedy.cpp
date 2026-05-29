#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m; cin >> n >> m;
    vector<int> g[n+1], res;
    vector<bool> vis(n+1, false);
    bool isin;

    for(int i = 0; i < m; i++){
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    for(int i = n; i > 0; i--){
        isin = false;
        for(auto viz : g[i]){
            if(vis[viz]){
                isin = true;
            }
        }

        if(!isin){
            res.push_back(i);
            vis[i] = true;
        }
    }

    sort(res.begin(), res.end());

    cout << res.size() << endl;
    for(auto i : res) {
        cout << i << " ";
    }
    cout << endl;
}