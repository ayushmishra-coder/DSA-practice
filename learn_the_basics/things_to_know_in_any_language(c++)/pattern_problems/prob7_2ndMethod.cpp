#include<bits/stdc++.h>
using namespace std ;
void pattern7(int n){
   /* char arr[n][2*n-1] ;

    for(int i=0;i<n;i++){
        for(int j=n-i-1;j<=n-1+i;j++){
            arr[i][j]='*' ;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<2*n-1;j++){
            if(arr[i][j] != '*'){
                arr[i][j]=' ';
            }
            cout << arr[i][j] ;
        }
        cout << endl ;
    } */
        for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout << " " ;
        }
        for(int j=n-i+1;j<=n+i-1;j++){
            cout << "*" ;
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