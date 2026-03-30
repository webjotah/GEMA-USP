#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, rating;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> rating;
        if(rating >= 1900){
            cout << "Division 1" << endl;
        } else if(1899 >= rating && rating >= 1600){
            cout << "Division 2" << endl;
        } else if(1599 >= rating && rating >= 1400){
            cout << "Division 3" << endl;
        } else {
            cout << "Division 4" << endl;
        }
    }
}