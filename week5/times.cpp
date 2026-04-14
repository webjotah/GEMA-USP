#include <bits/stdc++.h>
using namespace std;

// ios_base::sync_with_stdio(false);
// cin.tie(NULL);

int main(){
    map <int, string> player;
    map <int, vector<string>> times;
    int n, t, aux2;
    int cont = 1;
    string aux;

    cin >> n >> t;


    for(int i = 0; i < n; i++){
        cin >> aux >> aux2;
        player[aux2] = aux;
    }

    for(auto it = player.rbegin(); it != player.rend(); ++it){
        if(cont == t+1){
            cont = 1;
        }
        times[cont].push_back(it->second);
        cont++;
    }

    for(auto it : times){
        cout << "Time " << it.first << endl;
        sort(it.second.begin(), it.second.end());
        for(int i = 0; i < it.second.size(); i++){
            cout << it.second[i] << endl;
        }
        cout << endl;
    }


}