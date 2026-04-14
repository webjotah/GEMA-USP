#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    map<string, string> mp;
    string aux, aux2;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> aux >> aux2;
        mp[aux] = aux2;
    }

    cin.ignore();
    getline(cin, aux);
    stringstream ss(aux);
    while(ss >> aux2){
        cout << mp[aux2] << " ";
    }

    cout << endl;
}