#include <bits/stdc++.h>
using namespace std;

int main(){
    int m[3][3], maiorv;

    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j++){
            cin >> m[i][j];
            if(i == 0 && j == 0){
                maiorv = m[i][j];
            } else if(m[i][j] > maiorv){
                maiorv = m[i][j];
            }
        }
    }

    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j++){
            if(maiorv == m[i][j]){
                m[i][j] = -1;
            }
        }
    }

    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j++){
            cout << m[i][j] << " ";
        }

        cout << endl;
    }
}