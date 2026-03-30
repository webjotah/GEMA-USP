#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int soma = 0, ant = 1;

    cin >> n;

    cout << 0 << " ";

    while(soma <= n){
        if(soma == 0){
            soma = soma + ant;
            cout << soma << " ";
        } else {
            ant = soma - ant;
            soma = soma + ant;
            cout << soma << " ";
        }
    }

    cout << endl;

}