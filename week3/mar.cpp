#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> m(101, vector<int>(101,0));
    int n, xi, xf, yi, yf, cont = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> xi >> xf >> yi >> yf;

        int tam = (xf - xi) * (yf - yi);
        for(int l = yi; l < yf; l++){
            for(int c = xi; c < xf; c++){
                if(m[l][c] == 1){;
                    continue;
                } else {
                    m[l][c] = 1;
                    cont++;
                }
            }
        }
    }

    cout << cont << endl;
}