#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    bool mid = false;
    int pontf, ponti = 0;
    vector<char> v;

    cin >> s;

    char p[s.length()];

    pontf = s.length()-1;

    for(auto i : s){
        v.push_back(i);
    }

    sort(v.begin(), v.end());

    for(int i = 0; i<v.size(); i++){
        if(v[i] == v[i+1]){
            p[ponti] = v[i];
            p[pontf] = v[i+1];
        } else if(v.size()%2 != 0 && !mid){
            p[v.size()/2] = v[i];
            i--;
            pontf++;
            ponti--;
            mid = true;
        } else {
            cout << "NO SOLUTION" << endl;
            return 0;
        }

        i++;
        pontf--;
        ponti++;
    }

    for(auto i : p){
        cout << i;
    }

    cout << endl;

}