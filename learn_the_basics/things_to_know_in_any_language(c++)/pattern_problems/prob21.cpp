#include<iostream>
using namespace std;
void print_pattern21(int n){
    for(int i=1;i<=n;i++){
        cout << "*" ;
    }
    cout << "\n";
    for(int i=2;i<=n-1;i++){
        for(int j=1;j<=1;j++){
            cout << "*" ;
        }
        for(int j=2;j<=n-1;j++){
            cout << " " ;
        }
        for(int j=n;j<=n;j++){
            cout << "*";
        }
        cout <<"\n" ;
    }
    for(int i=1;i<=n;i++){
        cout << "*" ;
    }
}
int main(){
    int n;
    cin >> n;
    print_pattern21(n);
}