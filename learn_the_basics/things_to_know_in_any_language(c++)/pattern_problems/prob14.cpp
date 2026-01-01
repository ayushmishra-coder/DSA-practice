#include<iostream>
using namespace std ;
void print_pattern14(int n){
    int a= 'A' ; // ascii value of A
    for(int i=1;i<=n;i++){
        for(int j=a;j<a+i;j++){
            cout << (char)j ;
        }
        cout << endl ;
    }
}
int main(){
    int n;
    cout << "enter N: " ;
    cin >> n ;
    print_pattern14(n) ;
}