#include <bits/stdc++.h>
using namespace std;

int main(){
    int k, n, m, l, aux, contness = 0;
    bool ess = false, np = false;
    
    cin >> k;
    while(k--){
        cin >> n;
        cin >> m;
        vector<vector<int>> sets;
        map<int, int> mp;
        np = false;
        ess = false;
        contness = 0;
        for(int i = 0; i < n; i++){
            vector<int> tmp;
            cin >> l;
            for(int j = 0; j < l; j++){
                cin >> aux;
                tmp.push_back(aux);
                mp[aux]++;
            }
            sets.push_back(tmp);
        }

        for(int i = 1; i <= m; i++){
            if(mp[i] == 0){
                cout << "NO" << endl;
                np = true;
                break;
            }
        }
        
        for(int i = 0; i < n; i++){
            ess = false;
            for(int j = 0; j < sets[i].size(); j++){
                if(mp[sets[i][j]] - 1 == 0){
                    ess = true;
                    break;
                }
            }

            if(!ess){
                contness++;
                if(contness == 2) break;
            }

        }

        if(contness >= 2 && !np){
            cout << "YES" << endl;
        } else if(!np){
            cout << "NO" << endl;
        }
    }
}