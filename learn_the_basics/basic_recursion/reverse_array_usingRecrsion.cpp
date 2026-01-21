#include<bits/stdc++.h>
using namespace std;
// void reverse(int arr[],int n){ 
//     if(n==0) return;
//     cout << arr[n-1]<< " ";
//     reverse(arr,n-1);
// }
vector<int> res;
vector<int> reverse(int arr[],int n){
    if(n==1) {res.push_back(arr[0]) ;return res;}
    res.push_back(arr[n-1]);
    reverse(arr,n-1);
    return res;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
      cout << endl ;
//     reverse(arr,n);
// }
    for(auto x:reverse(arr,n)){
        cout << x << " ";
    }
}