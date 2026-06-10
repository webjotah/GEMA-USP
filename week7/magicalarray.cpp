#include <bits/stdc++.h>
using namespace std;

int main(){
    #define int long long
    int n; cin >> n;
    vector<int> vet(n);

    for(int i = 0; i < n; i++) cin >> vet[i];

    int l = 0, r = 1, soma = 1, res = 0;

    while(r < n){
        if(vet[r] != vet[l]){
            res += soma;
            soma = 1;
            l = r;
        } else {
            soma += r-l+1;
        }
        
        r++;
        if(r == n && vet[r-1] == vet[l]) res += soma-1;
    }

    cout << res+1 << endl;
}