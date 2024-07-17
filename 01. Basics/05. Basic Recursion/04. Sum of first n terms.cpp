#include <bits/stdc++.h>
using namespace std;

// parameterised
void sumParameterised(int i, int sum){
    if(i<1){
        cout << sum << endl;
        return;
    }
    sumParameterised(i-1, sum+i);
}

//functional
int sumFunctional(int n){
    if(n == 0){
        return 0;
    }
    return n + sumFunctional(n-1);
}

int main(){
    int n;
    cin >> n;
    sumParameterised(n, 0);
    cout << sumFunctional(n);
    return 0;
}