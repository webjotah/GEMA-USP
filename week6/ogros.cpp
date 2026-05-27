#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a, aux; cin >> n >> a;
    vector<int> gaps, pt;

    gaps.push_back(0);
    for(int i = 0; i < n-1; i++){
        cin >> aux;
        gaps.push_back(aux);
    }

    for(int i = 0; i < n; i++){
        cin >> aux;
        pt.push_back(aux);
    }

    for(int i = 0; i < a;i++){
        cin >> aux;
        auto it = upper_bound(gaps.begin(), gaps.end(), aux);
        int index = it - gaps.begin() -1;

        cout << pt[index] << " ";
    }

    cout << endl;

    return 0;

}