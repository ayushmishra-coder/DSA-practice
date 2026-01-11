#include<iostream>
using namespace std ;
void print_pattern15(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout <<  (char)('A'+j-1);
        }
        cout << endl ;
    }
}
int main(){
    int n;
    cout << "enter N: " ;
    cin >> n ;
    print_pattern15(n) ;
}