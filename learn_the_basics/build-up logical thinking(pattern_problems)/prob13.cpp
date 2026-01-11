#include<iostream>
using namespace std ;
void print_pattern13(int n){
    int k=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << k << " " ;
            k++ ;
        }
        cout << endl ;
    }
}
int main(){
    int n;
    cout << "enter N: " ;
    cin >> n ;
    print_pattern13(n) ;
} 