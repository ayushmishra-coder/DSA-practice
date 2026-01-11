#include<bits/stdc++.h>
using namespace std ;
void print_pattern9(int n){
    for(int i=0;i<(n+1)/2;i++){
        for(int j=0;j<(n-1)/2-i || j> (n-1)/2+i;j++){
            cout << " " ;
        }
        for(int j=(n-1)/2-i;j<=(n-1)/2+i;j++){
            cout << "*" ;
        }
        cout << endl ;
    }
    for(int i=0;i<(n+1)/2;i++){
        for(int j=0;j<i || j>=(n-i);j++){
            cout << " " ;
        }
        for(int j=i;j<n-i;j++){
            cout << "*" ;
        }
        cout << endl ;
    }
}
int main(){
    int n;
    cout << "enter N";
    cin >> n ;
    print_pattern9(n);
}