#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void dfs(int u, vector<bool>& vis, vector<vector<int>>& graph, int& last){
    vis[u] = true;
    last = u;
    for(int adj : graph[u]){
        if(!vis[adj]){
            dfs(adj, vis, graph, last);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, u, v, last = 0; cin >> n >> m;
    vector<vector<int>> graph(n+1);
    vector<bool> vis(n+1);
    vector<pair<int, int>> ans;

    for(int i = 0; i < m; i++){
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            if(i != 1){
                ans.push_back({last, i});
            }
            dfs(i, vis, graph, last);
        }
    }

    cout << ans.size() << endl;
    for(auto i : ans){
        cout << i.first << " " << i.second << endl;
    }



}