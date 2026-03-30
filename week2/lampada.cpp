#include <bits/stdc++.h>
using namespace std;

int main(){
    int k, aux;
    bool b1 = false, b2 = false;

    cin >> k;
    for(int i = 0; i < k; i++){
        cin >> aux;
        if(aux == 1){
            b1 = !b1;
        } else{
            b1 = !b1;
            b2 = !b2;
        }
    }

    cout << (b1 ? 1 : 0) << endl << (b2 ? 1 : 0) << endl;

}