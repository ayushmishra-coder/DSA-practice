#include<bits/stdc++.h>
using namespace std;
vector<int> leaders(vector<int>& arr) {
        int n=arr.size();
        int index=n-1;
        int temp=INT_MIN;//16,17,1,7,6,4,3,8,5,2
        for(int i=n-1;i>=0;i--){
            if(arr[i]>=temp){
                temp=arr[i];
                arr[index]=temp;
                index--;
            }
        }
        arr.erase(arr.begin(),arr.begin()+index+1);
        return arr;
    }
int main(){
    vector<int> arr={17,17,5};
    for(int el:leaders(arr)){
        cout << el << " ";
    }
}