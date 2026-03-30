#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, cont = 0;
    multiset<long int> t, val;
    long int aux;

    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> aux;
        t.insert(aux);
    }


    for(int i = 0; i < m; i++){
        cin >> aux;

        if(t.empty() || aux < *t.begin()){
            cout << -1 << endl;
        } else {
            auto it = t.upper_bound(aux); 
            cout << *--it << endl;
            t.erase(it);
        }
    }
}