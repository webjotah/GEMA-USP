#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x = 0, y = 0, auxx = 0, auxy = 0, auxx2, auxy2, cont = 0;

    cin >> n;

    for(int i = 0; i <= n; i++){
        auxx2 = auxx;
        auxy2 = auxy;
        auxx = x;
        auxy = y;
        cin >> x >> y;
        if(i == 0){
            auxx = x;
            auxy = y;
        }

        if(auxx2 < auxx && auxy < y){
            cont++;
        } else if(auxx < x && auxy2 > auxy){
            cont++;
        } else if(auxx2 > auxx && auxy > y){
            cont++;
        } else if(auxy2 < auxy && auxx > x){
            cont++;
        }
    }

    cout << cont << endl;
}