#include <bits/stdc++.h>
using namespace std;

void  printName1(int n) {
    if(n == 0) return;
    cout << "Hey ";
    printName1(n-1);

}

void printName2(int i, int n) {
    if(i>n) return;
    cout << "Hey ";
    printName2(i+1, n);
}

int main() {
    //int i;
    //cin >> i;
    int n;
    cin >> n;
    printName1(n);
    //printName2(i, n);
}