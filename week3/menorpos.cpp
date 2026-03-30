#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, menorpos, menor, aux;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> aux;
        if(i == 0){
            menor = aux;
            menorpos = i;
        } else if(menor > aux){
            menor = aux;
            menorpos = i;
        }
    }

    cout << "Menor valor: " << menor << endl << "Posicao: " << menorpos << endl;
}