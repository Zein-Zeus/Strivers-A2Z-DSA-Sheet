#include <bits/stdc++.h>
using namespace std;

int i = 0;
bool palindromeString(string s){
    int n = s.length();
    if(i >= n/2) return true;
    if(s[i] != s[n-i-1]) return false;
    i += 1;
    return palindromeString(s);
}

int main(){
    string s;
    cin >> s;
    if(palindromeString(s)) cout << "Palindrome" << endl;
    else cout << "Not Palindrome" << endl;
}