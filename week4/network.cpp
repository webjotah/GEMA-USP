#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, aux, d, maxd = 0;
    set<int> c, t;

    cin >> n >> k;

    for(int i = 0; i < n; i++){
        cin >> aux; 
        c.insert(aux);
    }

    for(int i = 0; i < k; i++){
        cin >> aux;
        t.insert(aux);
    }

    for(int cidade : c){//
        auto it = t.lower_bound(cidade);
        if(it == t.end()){
            it--;
            d = cidade - *it;
        } else if(it == t.begin()){
            d = abs(cidade - *it);
        } else if((*it) == cidade){
            d = 0;
        } else{
            int sucessor = *it;
            it--;
            int anterior = *it;

            d = min(abs(sucessor-cidade ), abs(cidade-anterior));
        }

        maxd = max(d, maxd);
    }

    cout << maxd << endl;
}