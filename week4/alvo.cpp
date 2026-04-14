#include <bits/stdc++.h>
using namespace std;

int main(){
    long long c, t, aux, score = 0;
    long long x, y;
    vector<long long> tc;

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> c >> t;

    for(int i = 0; i < c; i++){
        cin >> aux;
        tc.push_back(aux * aux);
    }

    for(int i = 0; i < t; i++){
        cin >> x >> y;
        
        long long dist_quad = x*x + y*y;

        auto it = lower_bound(tc.begin(), tc.end(), dist_quad);

        int pos = it - tc.begin(); 

        score += c - pos;
    }

    cout << score << endl;

    return 0;
}