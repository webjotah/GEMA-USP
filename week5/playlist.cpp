#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, aux, left=0, right=0, maxD = 0;
    vector<int> vet;
    map<int,int> mp;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> aux;
        vet.push_back(aux);
    }

    while(right < n){
        auto [it, inserted] = mp.insert({vet[right], right});
        if(inserted){
            right++;
        } else if(it->second < left){
            mp[it->first] = right;
            right++;
        } else {
            maxD = max(maxD, right-left);
            left = it->second + 1;
            mp[it->first] = right;
            right++;
        }
    }

    maxD = max(maxD, right - left);

    cout << maxD << endl;
}