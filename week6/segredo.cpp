#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, past; cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(10, 0));
    vector<int> res(10, 0);

    for(int i = 0; i < n; i++){
        if(i > 0){
            for(int j = 0; j < 10; j++){
                mat[i][j] += mat[i-1][j];
            }
        }
        int aux; cin >> aux;
        mat[i][aux]++;
    }

    int aux = 0;
    for(int i = 0; i < 10; i++){
        res[i] = mat[0][i];
    }

    cin >> aux;

    for(int i = 1; i < m; i++){
        past = aux;
        cin >> aux;
        for(int j = 0; j < 10; j++){
            if(past > aux){
                int sub = (aux > 1) ? mat[aux-2][j] : 0;
                res[j] += mat[past-2][j] - sub;
            } else {
                res[j] += mat[aux-1][j] - mat[past-1][j];
            }
        }
    }

    for(int i = 0; i < 10; i++){
        cout << res[i] << " ";
    }
    cout << endl;

    return 0;
}