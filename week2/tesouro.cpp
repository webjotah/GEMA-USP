#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x, y;
    string s;
    cin >> n >> x >> y >> s;
    for(int i = 0; i < n; i++){
        if(s[i] == 'C'){
            x--;
        } else if(s[i] == 'B'){
            x++;
        } else if(s[i] == 'E'){
            y--;
        } else if(s[i] == 'D'){
            y++;
        }
    }

    cout << x << " " << y << endl;
}