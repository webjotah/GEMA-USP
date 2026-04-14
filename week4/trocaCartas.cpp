#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> alice, bea;
    int a, b, aux, conta = 0, contb = 0;;

    cin >> a >> b;

    for (int i = 0; i < a; i++)
    {
        cin >> aux;
        alice.insert(aux);
    }
    
    for (int i = 0; i < b; i++)
    {
        cin >> aux;
        bea.insert(aux);
    }

    for(auto i : alice){
        auto it = bea.lower_bound(i);

        if((*it) != i){
            conta++;
        }
    }

    for(auto i : bea){
        auto it = alice.lower_bound(i);

        if((*it) != i){
            contb++;
        }
    }

    cout << min(conta, contb) << endl;
}