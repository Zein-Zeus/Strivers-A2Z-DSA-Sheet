#include <bits/stdc++.h>
using namespace std;

void printNs(int n) {
    if(n == 0) return;
    cout << n << " ";
    printNs(n-1);
}

int main() {
    int n;
    cin >> n;
    printNs(n);
    return 0;
}