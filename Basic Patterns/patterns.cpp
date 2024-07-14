#include <bits/stdc++.h>
using namespace std;

void pattern1(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << "* ";
        }
        cout << endl;
    }

}
void pattern2(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << "* ";
        }
        cout << "\n";
    }
}
void pattern3(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << j+1 << " ";
        }
        cout << "\n";
    }
}
void pattern5(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern6(int n){
    for(int i=0; i<n; i++){
        for(int j=1; j<=n-i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern7(int n){
    for(int i=0; i<n; i++){
        //space
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        //star
        for(int j=0; j< 2*i+1; j++){
            cout << "*";
        }
        //space
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        cout << endl;
    }
}
void pattern8(int n){
    for(int i=0; i<n; i++){
        //space
        for(int j=0; j<i; j++){
            cout << " ";
        }
        //star
        for(int j=0; j< 2*(n-i)-1; j++){
            cout << "*";
        }
        //space
        for(int j=0; j<i; j++){
            cout << " ";
        }
        cout << endl;
    }
}
void pattern10(int n){
    for(int i=1; i<=2*n-1; i++){
        int stars = i;
        if(i > n) stars = 2*n - i;
        for(int j=1; j<=stars; j++){
            cout << "*";
        }
        cout << endl;
    }
}
void pattern11(int n){
    int start=1;
    for(int i=0; i<n; i++){
        if(i%2==0) start = 1;
        else start = 0;
        for(int j=0; j<=i; j++){
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}
void pattern12(int n){
    for(int i=1; i<=n; i++){
        //number
        for(int j=1; j<=i; j++){
            cout << j;
        }
        //space
        for(int j=1; j<=2*(n-i); j++){
            cout << " ";
        }
        //number
        for(int j=1; j<=i; j++){
            cout << i-j+1;
        }
        cout << endl;
    }
}
void pattern13(int n){
    int count = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}
void pattern14(int n){
    for(int i=0; i<n; i++){
        //i = 2
        for(char ch = 'A'; ch<='A' + i; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}
void pattern15(int n){
    for(int i=0; i<n; i++){
        //i = 2
        for(char ch = 'A'; ch<'A' + (n-i); ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
    /*
    A B C D E 
    A B C D 
    A B C 
    A B 
    A 
    */
}
void pattern16(int n){
    // for(char ch = 'A'; ch <= 'A'+n-1; ch++){
    //     for(char ch2 = 'A'; ch2<=ch; ch2++){
    //         cout << ch << " ";
    //     }
    //     cout << endl;
    // }

    for(int i=0; i<n; i++){
        char ch = 'A' + i;
        for(int j=0; j<=i; j++){
            cout << ch << " ";
        }
        cout << endl;
    }
}
void pattern17(int n){
    for(int i=0; i<n; i++){
        //space
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        //letter
        char ch = 'A';
        for(int j=1; j<=2*i+1; j++){
            cout << ch;
            if(j < (2*i+1)/2 + 1) ch++;
            else ch--;
        }
        cout << endl;
    }
}
void pattern18(int n){
    for(int i=0; i<n; i++){
        for(char ch = 'E'-i; ch <= 'E'; ch++){
            cout << ch << " ";
        }
        cout << endl;

        /*
        char ch = 'A'+n-1;
        for(int j=0; j<=i; j++){
            cout << ch << " ";
            ch--;
        }
        cout << endl;

        E 
        E D 
        E D C 
        E D C B 
        E D C B A
        */
    }
}
void pattern19(int n){
    int space = 0; //initial space
    //top half
    for(int i=0; i<n; i++){
        //star
        for(int j=1; j<=n-i; j++){
            cout << "*";
        }
        //space
        for(int j=0; j<space; j++){
            cout << " ";
        }
        //star
        for(int j=1; j<=n-i; j++){
            cout << "*";
        }
        space+=2;
        cout << endl;
    }
    
    space = 2*n-2;
    //bottom half
    for(int i=1; i<=n; i++){
        //star
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        //space
        for(int j=0; j<space; j++){
            cout << " ";
        }
        //star
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        space-=2;
        cout << endl;

    }
}
void pattern20(int n){
    for(int i=1; i <= 2*n-1; i++){
        if(i<=n){
            //stars
            for(int j=1; j<=i; j++){
                cout << "* ";
            }
            //space
            for(int j=1; j<=2*(n-i); j++){
                cout << "  ";
            }
            //stars
            for(int j=1; j<=i; j++){
                cout << "* ";
            }
        }
        else{ 
            //stars
            for(int j=1; j<=2*n-i; j++){
                cout << "* ";
            }
            //space
            for(int j=1; j<=2*(i-n); j++){
                cout << "  ";
            }
            //stars
            for(int j=1; j<=2*n-i; j++){
                cout << "* ";
            }
        }
        cout << endl;
    }
}
void pattern21(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==0 || i==n-1 || j==0 || j==n-1) cout << "* ";
            else cout << "  ";
        }
        cout << endl;
    }
}
void pattern22(int n){
    for(int i=0; i < 2*n-1; i++){
        for(int j=0; j < 2*n-1;j++){
            int top = i;
            int left = j;
            int right = (2*n - 2)-j;
            int bottom = (2*n - 2)-i;

            cout << (n - min(min(top, bottom), min(left, right)));
        }
        cout << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        pattern2(n);
    }
    return 0;
}