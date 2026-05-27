#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main(){
   long long n, k, cont = 0; cin >> n >> k;
   vector<long long> v(n);
   map<long long, long long> mp;

   mp.insert({0, 1});

   for(int i = 0; i < n; i++){
    if(i == 0){
        cin >> v[i];
    } else {
        cin >> v[i];
        v[i] = v[i] + v[i-1];
    }
   }

   for(int i = 0; i < n; i++){
    auto it = mp.find(v[i] - k);
    if(it != mp.end()){
        cont += it->second;
    }
    
    mp[v[i]]++;
   }

//    for(auto it = mp.begin(); it != mp.end(); ++it){
//     cout << "{" << it->first << ":" << it->second << "} ";
//    }
//    cout << endl;

   cout << cont << endl;
   
    
}