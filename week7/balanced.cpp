#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v(n);
    
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());

    int l = 0, r = 1, cont = 1, mx = 0;
    while(r < n){
        if(v[r] - v[l] > 5){
            mx = max(cont, mx);
            while(l != r){
                l++;
                if(v[r] - v[l] <= 5) break;
            }
            cont = r-l+1;
        } else {
            cont++;
        }

        r++;
    }

    mx = max(cont, mx);


    cout << mx << endl;
}