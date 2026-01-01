#include<bits/stdc++.h>
using namespace std ;
void print_pattern17(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout << " " ;
        }
        int count='A';
        for(int j=n-i+1;j<=n;j++){
            cout << (char)count;
            count++ ;
        }
        int k= 'A'+i-2;
        for(int j=n+1;j<=n+i-1;j++){
            cout << (char)k;
            k--;
        }
        cout << endl ;
    }
}
int main(){
    int n;
    cout << "enter N: " ;
    cin >> n ;
    print_pattern17(n) ;
}