#include<iostream>
using namespace std ;
void print_pattern18(int n){
    for(int i=0;i<n;i++){
        int k='A'+n-i-1;
        for(int j=0;j<=i;j++){
            cout << (char)k << " " ;
            k++ ;
        }
        cout << endl ;
    }
}
int main(){
    int n;
    cout << "enter N: " ;
    cin >> n ;
    print_pattern18(n) ;
}