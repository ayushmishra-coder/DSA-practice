#include<bits/stdc++.h>
using namespace std;
vector<int> findTwoElement(vector<int>& arr) {
    int n=arr.size();
    int i=0;int repeating=-1;int missing=-1;
    while(i<n){
        if(arr[i]!=i+1 && arr[arr[i]-1]!=arr[i]){
            swap(arr[arr[i]-1],arr[i]);
        }
        else if(arr[i]!=i+1 && arr[arr[i]-1]==arr[i]){
            repeating=arr[i];
            missing=i+1;
            i++;
        }
        else{
            i++;
        }
    }
    return {repeating,missing};
}
int main(){
    vector<int> arr={3, 5, 4, 1, 1};//6 5 8 7 1 4 1 3 2//{2,3,4,2,5}
    for(auto el:findTwoElement(arr)){
        cout << el << " ";
    }
}