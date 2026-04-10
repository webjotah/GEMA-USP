#include <bits/stdc++.h>
using namespace std;

int main(){
    int c, t, x, y, aux, score = 0;
    vector<int> tc;

    cin >> c >> t;

    for(int i = 0; i < c; i++){
        cin >> aux;
        tc.push_back(aux);
    }

    for(int i = 0; i < t; i++){
        cin >> x >> y;
        float hip = sqrt(x*x + y*y);

        auto it = lower_bound(tc.begin(), tc.end(), hip);

        int pos = it - tc.begin(); 

        score += c-pos;
    }

    cout << score << endl;
}