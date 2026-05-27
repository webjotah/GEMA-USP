#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef unsigned long long ll;

bool check(vector<ll> v, ll t, ll mid){
    ll sum = 0;
    for(int i = 0; i < v.size(); i++){
        sum += mid / v[i];
        if(sum >= t) return true;
    }

    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, t, low = 0, high = 1e18, mid, ans; cin >> n >> t;
    vector<ll> v(n);

    for(ll i = 0; i < n; i++){
        cin >> v[i];
    }

    while(low <= high){
        mid = (low + high)/2;
        if(check(v, t, mid)){
            high = mid-1;
            ans = mid;
        } else {
            low = mid+1;
        }
    }


    cout << ans << endl;

    return 0;
}