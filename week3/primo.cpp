#include <bits/stdc++.h>

using namespace std;

bool eh_primo(int x){
    if(x <=1) return false;
	int y = sqrt(x) + 1;  
    for(int i = 2; i < y; i++){
        if(x%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
	int x;

	cin>>x;

	if(eh_primo(x)){
		cout << "S" << "\n";
	}else{
		cout << "N" << "\n";
	}
}
