#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, target, aux, left = 0;
    vector<long long> v, vs;

    cin >> n >> target;

    long long right = n-1;

    for(int i = 0; i < n; i++){
        cin >> aux;
        v.push_back(aux);
        vs.push_back(aux);
    }

    sort(vs.begin(), vs.end());

    while(left != right){
        if(vs[left] + vs[right] == target){
            break;
        } else if(vs[left]+vs[right] > target){
            right--;
        } else {
            left++;
        }
    }

    if(left == right){
        cout << "IMPOSSIBLE" << endl;
    } else {
        cout << find(v.begin(), v.end(), vs[right]) - v.begin() + 1 << " " << distance(find(v.rbegin(), v.rend(), vs[left]), v.rend())<< endl;
    }

}