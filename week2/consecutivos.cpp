#include <bits/stdc++.h>
using namespace std;

int main(){
    long long k, aux, aux1, maior = -1, cont = 1;

    cin >> k;

    for(int i = 0; i < k; i++){
        aux1 = aux;
        cin >> aux;
        if(i!=0){
            if(aux1 == aux){
                cont++;
            } else if(cont > maior){
                maior = cont;
                cont = 1;
            } else {
                cont = 1;
            }
        }
    } 

    cout << max(maior,cont) << endl;
}