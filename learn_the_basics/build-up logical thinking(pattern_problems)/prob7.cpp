#include<bits/stdc++.h>
using namespace std ;
void pattern7(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<2*n-1;j++){
            if(j>=n-1-i && j<=n-1+i){
                cout << "*" ;
            }
            else{
                cout << " " ; 
            }
        }
        cout << endl ;
    }
}

int main(){
    int n;
    cout << "enter N: " ;
    cin >> n ;
    
    pattern7(n);
}