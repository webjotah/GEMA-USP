#include <bits/stdc++.h>
using namespace std;

bool possible(long long k, long long mid, vector<int> v){
    long long sum = 0;
    for(int i = 0; i < v.size(); i++){
        sum += mid/v[i];
    }

    if(sum >= k) return true;
    return false;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, k, l = 0, r = 1000000000, mid, ans; cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    while(l <= r){
        mid = (l+r)/2;
        if(possible(k, mid, v)){
            r = mid - 1;
            ans = mid;
        } else {
            l = mid + 1;
        }
    }

    cout << ans << endl;
}