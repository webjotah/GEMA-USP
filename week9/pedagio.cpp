#include <bits/stdc++.h>
using namespace std;

#define endl '\n';

int main(){
    int c, e, l, p, cont = 1; cin >> c >> e >> l >> p;

    while(c != 0){
        vector<vector<bool>> m(c+1, vector<bool> (c+1, false));
        vector<int> vis(c+1), res;
        queue<int> q;

        for(int i = 0; i < e; i++){
            int u, v; cin >> u >> v;
            m[u][v] = true;
            m[v][u] = true;
        }

        q.push(l);
        vis[l]++;

        while(!q.empty()){
            int u = q.front();
            q.pop();
            
            for(int i = 1; i <= c; i++){
                if(m[u][i] == true && vis[u] <= p && vis[i] == 0){
                    q.push(i);
                    res.push_back(i);
                    vis[i] = vis[u]+1;
                }
            }
        }

        sort(res.begin(), res.end());

        cout << "Teste " << cont << endl;
        for(int i = 0; i < res.size(); i++){
            cout << res[i] << " ";
        }
        cout << endl;
        cout << endl;

        cont++;

        cin >> c >> e >> l >> p;

    }
}