#include<iostream>
using namespace std ;
void print_pattern16(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << (char)('A'+i) ;
        }
        cout << endl ;
    }
}
int main(){
    int n;
    cout << "enter N: " ;
    cin >> n ;
    print_pattern16(n) ;
}