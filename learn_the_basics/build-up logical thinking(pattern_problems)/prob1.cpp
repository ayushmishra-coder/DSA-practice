#include<bits/stdc++.h>
using namespace std ;
void pattern1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        cout << "* " ;
        }
        cout << "\n" ;
    }
}
int main(){
    int n;
    cout << "enter N: " ;
    cin >> n ;
    pattern1(n);
}