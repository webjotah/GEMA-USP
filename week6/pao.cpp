#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> v, int mid, int p){
    int sum = 0;
    for(int i = 0; i < v.size(); i++){
        sum += v[i] / mid;
    }

    if(sum >= p) return true;
    return false;
}

int main(){
    int p, k, low = 0, high = 10000, ans, mid; cin >> p >> k;
    vector<int> v(k);

    for(int i = 0; i < k; i++) cin >> v[i];

    while(low <= high){
        mid = (low + high)/2;
        if(check(v, mid, p)){
            low = mid+1;
            ans = mid;
        } else {
            high = mid-1;
        }
    }

    cout << ans << endl;
}