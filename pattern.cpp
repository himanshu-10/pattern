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

void pattern7(int n){
    for(int i = 0; i< n; i++){
        // space
        for(int j = 0; j<n-i-1; j++){
            cout << " ";
        }
        // start
        for(int j = 0; j<2*i+1;j++){
            cout << "*";
        }
        // space
        for(int j = 0; j<n-i-1; j++){
            cout << " ";
        }
        cout << endl;
    }

}

void pattern8(int n){
    for(int i = 0; i<n; i++){
        //space
        for(int j = 0; j<i;j++){
            cout <<" ";
        }
        // star
        for(int j=0; j< 2*n -(2*i+1);j++){
            cout << "*";
        }
        //space
        for(int j = 0; j<i;j++){
            cout <<" ";
        }
        cout << endl;
    }
}

void pattern10(int n){
    for(int i = 1; i<= 2*n-1;i++){
        int star = i;
        if(i > n){
            star = 2*n-i;
        }
        for(int j = 1;j<= star;j++){
            cout << "*";
        }
        cout << endl;
    }
}

void pattern11(int n){
    for(int i = 0; i<n;i++){
        int start = 1;
        if(i % 2 == 0){
            start = 1;
        }else{
            start = 0;
        }

        for(int j = 0 ;j<=i; j++){
            cout << start;
            start = !start;
        }
        cout << endl;
    }

}

void pattern12(int n){
    for(int i = 1; i<= n; i++){
        // number 
        for(int j = 1; j<=i; j++){
            cout << j;
        }

        // space
        for(int j = 1; j<= 2*(n-i);j++){
            cout << " ";
        }

        //number
        for(int j = i; j>=1; j--){
            cout << j;
        }
        cout << endl;
    }
}

void pattern13(int n){
    int num =1;
    for(int i = 1; i<=n;i++){
        for(int j = 1; j<=i; j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}

void pattern14(int n){
    for(int i = 0; i< n;i++){
        for(char ch = 'A'; ch <= 'A'+(n-i-1); ch++){
            cout << ch;
        }
        cout << endl;
    }
}

void pattern15(int n){
    for(int i = 0; i<n; i++){
        for(char ch = 'A' ; ch <= 'A'+i; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern16(int n){
    for(int i = 0; i<n;i++){
        char ch = 'A'+i;
        for(int j = 0 ; j<=i;j++){
            cout << ch << " ";
        }
        cout << endl;
    }
}


int main(){
    int n;
    cout << "enter number" << endl;
    cin >> n;


    // * * * * * 
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *
    // pattern1(n);


    // * 
    // * *
    // * * *
    // * * * *
    // * * * * * 
    // pattern2(n);


    // 1
    // 12
    // 123
    // 1234
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


    //     *    
    //    ***   
    //   *****  
    //  ******* 
    // *********
    // pattern7(n);


    // *********
    //  *******
    //   *****
    //    *** 
    //     * 
    // pattern8(n);


    //     *    
    //    ***
    //   *****
    //  *******
    // *********
    // *********
    //  *******
    //   *****
    //    ***
    //     *   
    // pattern9 => combination of pattern7(n) and pattern8(n)


    // *
    // **
    // ***
    // ****
    // *****
    // ****
    // ***
    // **
    // *
    // pattern10(n);

    // 1
    // 01
    // 101
    // 0101
    // 10101
    // pattern11(n);


    // 1        1
    // 12      21
    // 123    321
    // 1234  4321
    // 1234554321
    // pattern12(n);


    // 1 
    // 2 3
    // 4 5 6
    // 7 8 9 10
    // 11 12 13 14 15
    // pattern13(n);


    // A 
    // A B
    // A B C
    // A B C D
    // A B C D E
    // pattern15(n);


    // ABCDE
    // ABCD
    // ABC
    // AB
    // A
    // pattern14(n);

    pattern16(n);

}