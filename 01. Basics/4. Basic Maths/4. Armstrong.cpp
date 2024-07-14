#include <bits/stdc++.h>
using namespace std;

int checkArmstrong (int n){
    int cnt = to_string(n).length();
    int sum = 0;
    int org = n;
    while(n > 0){
        int rem = n % 10;
        sum += pow(rem, cnt);
        n = n / 10;
    }
    if (sum == org) return true;
    else return false;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        if(checkArmstrong(n)) cout << "Armstrong" << endl;
        else cout << "Not Armstrong" << endl;
        return 0;
    }
}