#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef unsigned long long ll;

bool check(ll k, vector<ll>& v, ll mid){
    ll currentsum = 0;
    ll subarray = 1;
    for(int num : v){
        if(currentsum + num > mid){
            subarray++;
            currentsum = num;
            if(subarray > k){
                return false;
            }
        } else currentsum+=num;

    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k, somatot = 0, maiorel = 0; cin >> n >> k;
    vector<ll> v(n);

    for(ll m = 0; m < n; m++){
        cin >> v[m];
        somatot += v[m];
        maiorel = max(maiorel, v[m]);
    }

    ll i = maiorel, j = somatot, mid, ans;
    
    while (i <= j){
        mid = i + (j-i)/2;
        if(check(k, v, mid)){
            ans = mid;
            j = mid-1;
        } else {
            i = mid+1;
        }

    }

    cout << ans << endl;
    return 0;
}