#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, aux, sum = 0;
    set<pair<int, int>> rob;
    set<pair<int,int>> will;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> aux;
        rob.insert({i, aux});
        will.insert({aux, i});
    }

    for(int i = 0; i < n/2; i++){
        auto itw = will.end();
        itw--;
        auto it = will.lower_bound({itw->first, -1});
        sum += it->first;
        rob.erase({it->second, it->first});
        will.erase(it);

        auto itr = rob.begin(); 
        will.erase({itr->second, itr->first});
        rob.erase(rob.begin());
    }

    cout << sum << endl;


}