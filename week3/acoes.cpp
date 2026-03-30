#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, cont = 0;
    vector<int> v;
    cin >> n >> k;

    while (n != 0 && k != 0){
        v.push_back(n);
        for(int i = 0; i < v.size(); i++){
            if(v[i] > k){
                v.push_back(ceil(v[i]/2.0));
                v.push_back(floor(v[i]/2.0));
            } else {
                cont++;
            }
        }

        cout << cont << endl;
        v.clear();
        cont = 0;

        cin >> n >> k;
    }

}