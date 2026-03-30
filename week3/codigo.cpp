#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, aux, cont1 = 0;
    vector<int> v;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin>>aux;
        v.push_back(aux);
    }

    for(int i = 2; i < n; i++){
        if(v[i]== 0 && v[i-1] == 0 && v[i-2] == 1){
            cont1++;
        }
    }

    cout << cont1 << endl;
}