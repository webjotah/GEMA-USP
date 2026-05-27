#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, t, a, b;
    cin >> n >> m;
    vector<set<int>> graph(n+1);

    for(int i = 0; i < m; i++){
        cin >> t >> a >> b;
        if(t == 0){
            if(graph[a].find(b) != graph[a].end()) cout << 1 << endl;
            else cout << 0 << endl;
        } else {
            graph[a].insert(b);
            graph[b].insert(a);
        }
    }

    
}