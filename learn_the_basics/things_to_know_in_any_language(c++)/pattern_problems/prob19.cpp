#include<bits/stdc++.h>
using namespace std;
void print_pattern19(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout << "*" ;
        }
        for(int j=n-i+1;j<=n+i;j++){
            cout << " " ;
        }
        for(int j=n+i+1;j<=2*n;j++){
            cout << "*" ;
        }
        cout << endl ;
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<=i+1;j++){
            cout << "*" ;
        }
        for(int j=i+2;j<=2*n-i-1;j++){
            cout << " " ;
        }
        for(int j=2*n-i;j<=2*n;j++){
            cout << "*" ;
        }
        cout << endl ;
    }
}
int main(){
    int n;
    cout << "enter N: " ;
    cin >> n ;
    print_pattern19(n) ;
}