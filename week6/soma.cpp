#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, q, aux, a, b, sum = 0;
    vector<long long> v;

    cin >> n >> q;

    v.push_back(0);
    for(int i = 0; i < n; i++){
        cin >> aux;
        sum += aux;
        v.push_back(sum);
    }

    for(int i = 0; i < q; i++){
        cin >> a >> b;
        cout << v[b] - v[a-1] << endl;
    }
}