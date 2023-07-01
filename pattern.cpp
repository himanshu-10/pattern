#include<bits/stdc++.h>
using namespace std;

void pattern1(int n){
    for(int i = 0 ; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern2(int n){
    for(int i = 0; i < n ; i++){
        for(int j = 0; j <= i ; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern3(int n){
     for(int i = 1; i < n ; i++){
        for(int j = 1; j <= i ; j++){
            cout << j;
        }
        cout << endl;
    }
}

void pattern4(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << i;
        }
        cout << endl;
    }
}

void pattern5(int n){
    for(int i = 1; i<= n; i++){
        for(int j =1 ; j<= n-i+1; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern6(int n){
    for(int i = 1; i<= n; i++){
        for(int j = 1 ; j<= n-i+1; j++){
            cout << j;
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;

    // pattern1(n);
    // pattern2(n);
    // pattern3(n);


    // 1
    // 22
    // 333
    // 4444
    // pattern4(n);

    // * * * * 
    // * * *
    // * *
    // * 
    // pattern5(n);

    // 12345
    // 1234
    // 123
    // 12
    // 1
    // pattern6(n);
}