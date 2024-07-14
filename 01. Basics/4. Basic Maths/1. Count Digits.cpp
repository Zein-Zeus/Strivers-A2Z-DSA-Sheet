#include <bits/stdc++.h>
using namespace std;

int countDigits(int n){
    int count = 0;
    while(n>0){
        int rem = n%10;
        n = n/10;
        count++;
    }
    return count;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int digits = countDigits(n);
        cout << digits << endl;

    }
    return 0;
}