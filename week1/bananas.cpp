#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, k, w, tot;

    cin >> k >> n >> w;

    if(((k + k*w)*w/2) - n < 0){
        tot = 0;
    } else {
        tot = ((k + k*w)*w/2) - n;
    }

    cout << tot << endl;
}  