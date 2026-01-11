#include<bits/stdc++.h>
using namespace std;
void print_pattern12(int a){
    int n=(a-1) ;//  n =4
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << j;
        }
        for(int j=i+1;j<=2*n-i;j++){
            cout << " " ;
        }
        for(int j=2*n-i+1;j<=2*n;j++){
            cout << 2*n+1-j;            
        }
        cout << endl ;
    }
}
int main(){
    int n;
    cout << "enter N: " ;
    cin >> n ;
    print_pattern12(n) ;
} 