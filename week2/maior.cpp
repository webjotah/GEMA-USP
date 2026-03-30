#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, maior;

    cin >> n;
    maior = n;
    while(n != 0){
        cin >> n;
        if(maior < n){
            maior = n;
        }
    }

    cout << maior << endl;
}