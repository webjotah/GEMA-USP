#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    int t; cin >> t;

    while(t--){
        int n, k; cin >> n >> k;
        vector<int> v(n);
        int tot = 0, res, soma = 0;

        for(int i = 0; i < n; i++){
            cin >> v[i];
            tot += v[i];
        }

        res = ceil(tot/k);
        soma = v[0];
        cout << soma << " ";

        for(int i = 1; i < n; i++){
            if(soma + v[i] > res && k > 1){
                cout << "/ " << v[i] << " ";
                soma = 0;
                k--;
            } else {
                cout << v[i] << " ";
            }
            soma += v[i];
        }

        cout << endl;
    }
}