//cant call arr by value by default they called by reference
#include<bits/stdc++.h>
using namespace std;
void modify(int n,int arr[]){
    arr[0]=0;
    int j=0;
    do{
    cout << arr[j] <<" ";
    j++;
    } while(j<n);

}
int main(){
    int n;
    cin >> n ;
    int arr[n];
    for(int i=0;i<n;i++){
    cin >> arr[i] ;
}
    modify(n,arr);
    int j=0;
    do{
    cout << arr[j] <<" ";
    j++;
    } while(j<n);
}
//cant call arr by value by default they called by reference
