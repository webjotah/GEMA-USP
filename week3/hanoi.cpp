#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<long int> v;
    int aux, cont = 0;

    v.push_back(1);

    for(int i = 1; i < 30; i++){
        v.push_back(v[i-1]*2 + 1);
    }
    cin >> aux;
    while(aux != 0){
        cont++;
        cout << "Teste " << cont << endl << v[aux-1] << endl << endl;
        cin >> aux;
    }
}