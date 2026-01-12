#include<bits/stdc++.h>
using namespace std;
void check_prime(int n){
    if(n<=1){
        cout << n << " is not prime";
        return;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            cout << n << " is not prime";
            return;
        }
    }
    cout << n << " is prime";
}
int main(){
    int n;
    cin >> n;
    check_prime(n);
}