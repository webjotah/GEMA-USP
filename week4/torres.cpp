#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, soma, maior = 0, somaMaior;
    vector<int> sl, sc;
    cin >> n;

    int m[n][n];

    for(int i = 0; i < n; i++){
        soma = 0;
        for(int j = 0; j < n; j++){
            cin >> m[i][j];
            soma += m[i][j];
        }

        sl.push_back(soma);
    }

    for(int i = 0; i < n; i++){
        soma = 0;
        for(int j = 0; j<n; j++){
            soma += m[j][i];
        }
        sc.push_back(soma);
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            somaMaior = sc[j] + sl[i] - 2*m[i][j];
            if(somaMaior > maior){
                maior = somaMaior;
            }
        }
    }

    cout << maior << endl;
}