#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int dfs(int u, vector<int> g[], bool& vef){
     if(g[u].size() == 0){
        return 1;
    }

    vector<int> cmp;
    
    int totPeso = 1;
    for(auto adj : g[u]){
        int pesoFilho = dfs(adj, g, vef);
        cmp.push_back(pesoFilho);
        totPeso += pesoFilho;
    }

    for(int i = 0; i < cmp.size()-1; i++){
        if(cmp[i+1] != cmp[i]){
            vef = false;
        }
    }

    return totPeso;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, res = -1; cin >> n;
    bool vef = true;;
    vector<int> g[n+1], prof(n+1, 0);
    vector<bool> vis(n+1);

    for(int i = 0; i < n; i++){
        int u, v; cin >> u >> v;
        g[v].push_back(u);
    }

    dfs(0, g, vef);

    if(vef){
        cout << "bem" << endl;
    } else {
        cout << "mal" << endl;   
    }


}