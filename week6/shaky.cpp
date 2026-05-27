#include <bits/stdc++.h>
using namespace std;

bool check(long long mid, vector<long long> cb, long long k){
    long long sum = 0;
    for(long long i = 0; i < cb.size(); i++){
        sum += cb[i] / mid;
    }

    if(sum >= k) {
        return true;
    }
    else {
        return false;
    };
}

int main(){
    int n;
    long long cb, f, aux, ans;
    
    cin >> n;
    
    while(n--){
        vector<long long> c;
        long long l = 0, h = 1000000000, mid;
        cin >> cb >> f;
        for(long long i = 0; i < cb; i++){
            cin >> aux;
            c.push_back(aux);
        }

        while(l <= h){
            mid = (l+1+h)/2;
            if(mid == 0){
                cout << 0 << endl;
                break;
            }
            if(check(mid, c, f)){
                ans = mid;
                l = mid+1;
            } else {
                h = mid-1;
            };
        }
        if(mid != 0){
            cout << ans << endl;
        }
    }

}
