#include<bits/stdc++.h>
using namespace std ;
void print_pattern8(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<2*n-1;j++){
            if(j>=i && j<2*n-1-i){
                cout << "*" ;
            }
            else{
                cout << " " ;
            }
        }
        cout << "\n";
    }
}
int main(){
    int n;
    cout << "enter N: " ;
    cin >> n ;
    print_pattern8(n);
}