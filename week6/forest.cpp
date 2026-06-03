#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    int n, m, x1, y1, x2, y2; cin >> n >> m;
    char aux;
    int mat[n][n];
    vector<vector<int>> pref (n+1, vector<int>(n+1, 0));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> aux;
            if(aux == '.'){
                mat[i][j] = 0;
            } else {
                mat[i][j] = 1;
            }
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            pref[i][j] = mat[i-1][j-1] + pref[i-1][j] + pref[i][j-1] - pref[i-1][j-1];
        }
    }

    for(int i = 0; i < m; i++){
        cin >> y1 >> x1 >> y2 >> x2;
        cout << pref[y2][x2] - pref[y2][x1-1] - pref[y1-1][x2] + pref[y1-1][x1-1] << endl;
    }


}