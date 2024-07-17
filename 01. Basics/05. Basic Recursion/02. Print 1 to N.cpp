#include <bits/stdc++.h>
using namespace std;

// int cnt = 0;
// void print(int n) {
//     if(cnt == n) return;
//     cout << cnt << endl;
//     cnt++;
//     print(n);
// }

void printNs(int i, int n) {
    if (i>n) return;
    cout << i << " ";
    printNs(i+1, n);
}

int main() {
    int i, n;
    cin >> i >> n;
    printNs(i, n);
}