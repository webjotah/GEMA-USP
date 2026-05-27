#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int cont = 0;

void dfs(int u, vector<bool>& vis, vector<vector<int>>& graph){
    vis[u] = true;
    for(int i = 0; i < graph[u].size(); i++){
        if(!vis[graph[u].at(i)]) dfs(graph[u].at(i), vis, graph);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, u, v; cin >> n >> m;
    vector<vector<int>> graph(n+1);
    vector<bool> visitados(n+1, false);

    visitados[0] = true;

    for(int i = 0; i < m; i++){
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for(int i = 1; i <= n; i++){
        if(!visitados[i]){
            cont++;
            dfs(i, visitados, graph);
        }
    }

    cout << cont << endl;
}