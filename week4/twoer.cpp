#include <bits/stdc++.h>
using namespace std;

int main(){
    long int n, aux, menor = -1, menorpos;
    vector<long int> qtd;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> aux;

        if(qtd.size() == 0){
            qtd.push_back(aux);
        } else {
            auto it = upper_bound(qtd.begin(), qtd.end(), aux);

            if(it != qtd.end()){
                int pos = it - qtd.begin();
                qtd[pos] = aux;
            } else {
                qtd.push_back(aux);
            }
        }
    }

    cout << qtd.size() << endl;
    
}