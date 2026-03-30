#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, aux, cont;
    vector<int> v, r;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> aux;
        v.push_back(aux);
    }

    for(int i = 0; i < n; i++){
        if(v[i] == 1){
            cont = 1;
        } else {
            cont = 0;
        }
        if(i == 0){
            if(v[i+1] == 1){
                cont++;
            }
        } else if(i == n-1){
            if(v[i-1] == 1){
                cont++;
            }
        } else {
            if(v[i-1] == 1){
                cont++;
            }
            if(v[i+1] == 1){
                cont++;
            }
        }

        r.push_back(cont);
    }

    for(int i = 0; i < n; i++){
        cout << r[i] << endl;
    }
}