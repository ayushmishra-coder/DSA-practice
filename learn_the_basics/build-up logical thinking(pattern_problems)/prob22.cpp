#include<iostream>
using namespace std;
void print_pattern22(int n){
    int k=n;
    
    for(int i=1;i<=n;i++){
        int l=n;
        for(int j=1;j<i;j++){
            cout << l << " ";
            l--;
        }
        for(int j=i;j<=2*n-i;j++){
            cout << k << " ";
        }
        //i=4;j=5;"2"||j=6;"3"||j=7;"4" //i=3;j=6;"3";j=7;"4"
        for(int j=2*n-i+1;j<=2*n-1;j++){
            cout << j-(n-1) << " ";
            
        }
        cout << endl;
        k--;
    }
    for(int i=1;i<n;i++){
        int l=n;
        for(int j=1;j<n-i;j++){
            cout << l << " ";
            l--;
        }
        for(int j=n-i;j<=n+i;j++){
            cout << i+1 << " ";
        }
        
        
        for(int j=n+i+1;j<=2*n-1;j++){
            cout << j-(n-1) << " ";        
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    print_pattern22(n);
}