#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, start, end, contr, contt, tot;
    cin >> n >> m;


    for(int i = 0; i < m; i++){
        cin >> start >> end;
    }

    for(int i = 0; i < n; i++){
        if(i%2 == 0){
            cout << 1;
        } else {
            cout << 0;
        }
    }

    cout << endl;

}