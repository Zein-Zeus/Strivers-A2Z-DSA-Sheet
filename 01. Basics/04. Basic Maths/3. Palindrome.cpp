#include <bits/stdc++.h>
using namespace std;

int checkPalindrome(int n){
    int rev = 0;
    int org = n;
    while(n > 0){
        int rem = n % 10;
        rev = 10 * rev + rem;
        n = n / 10;
    }
    if (rev == org) return true;
    else return false;

}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (checkPalindrome(n)) cout << "Palindrome" << endl;
        else cout << "Not Palindrome" << endl;
    }
    
}
