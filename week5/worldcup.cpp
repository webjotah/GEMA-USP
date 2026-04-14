#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<char> v = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P'};
    int m, n;

    for(int i = 0; i < 8; i++){
        cin >> m >> n;
        if(m > n){
            v.erase(v.begin()+i+1);
        } else {
            v.erase(v.begin()+i);
        }
    }

    for(int i = 0; i < 4; i++){
        cin >> m >> n;
        if(m > n){
            v.erase(v.begin()+i+1);
        } else {
            v.erase(v.begin()+i);
        }
    }

    for(int i = 0; i < 2; i++){
        cin >> m >> n;
        if(m > n){
            v.erase(v.begin()+i+1);
        } else {
            v.erase(v.begin()+i);
        }
    }

    cin >> m >> n;
    
    if(m > n){
        cout << v[0] << endl;
    } else {
        cout << v[1] << endl;
    }
}