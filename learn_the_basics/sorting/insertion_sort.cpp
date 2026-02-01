#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    /*for(int i=1;i<n;i++){
        for(int j=i-1;j>=0 && arr[j]>arr[j+1];j--){
           swap(arr[j+1],arr[j]);
        }
    }*/ //insertion but swap not shiftingbut absolutely alright

    for(int i=0;i<n-1;i++){
        int key=arr[i+1];
        int j=i;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
     for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}