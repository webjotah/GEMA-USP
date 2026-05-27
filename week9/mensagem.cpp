#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int bfs(vector<vector<int>>& graph, vector<int>& vis, int n, vector<int>& parent){
    queue<int> fila;
    fila.push(1);
    vis[1] = 1;

    while(!fila.empty()){
        int u = fila.front();
        fila.pop();

        if(u == n){
            return vis[n];
        }

        for(int i = 0; i < graph[u].size(); i++){
            if(vis[graph[u].at(i)] == -1){
                fila.push(graph[u].at(i));
                vis[graph[u].at(i)] = vis[u]+1;
                parent[graph[u].at(i)] = u;
            }
        }
    }

    return 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m, u, v; cin >> n >> m;
    vector<vector<int>> graph(n+1);
    vector<int> vis(n+1, -1), parent(n+1);
    vector<int> vetRes;

    for(int i = 0; i < m; i++){
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int res = bfs(graph, vis, n, parent);
    if(res == 0){
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }

    int pai = n;
    for(int i = 0; i < res; i++){
        vetRes.push_back(pai);
        pai = parent[pai];
    }

    reverse(vetRes.begin(), vetRes.end());

    cout << res << endl;
    for(auto i : vetRes){
        cout << i << " ";
    }
    cout << endl;


}