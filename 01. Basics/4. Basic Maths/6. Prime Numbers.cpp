#include <bits/stdc++.h>
using namespace std;

int checkPrime(int n){
    for(int i = 2; i*i<=n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(checkPrime(n)) cout << "Prime" << endl;
        else cout << "Not Prime" << endl;
    }
}