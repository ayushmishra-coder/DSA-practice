#include <bits/stdc++.h>
using namespace std;
int merge(vector<int> & arr,int low,int mid,int high){
    int cnt=0;
    vector<int> temp;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high){
        if(arr[left]>arr[right] ){
            cnt+=mid-left+1;
            temp.push_back(arr[right]);
            right++;
        }
        else{
            temp.push_back(arr[left]);
            left++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
    return cnt;
}
int mergesort(vector<int> &arr,int low,int high){
    int cnt=0;
    if(low>=high){
        return cnt;
    }
    int mid=low+(high-low)/2;
    cnt+=mergesort(arr,low,mid);
    cnt+=mergesort(arr,mid+1,high);
    cnt+=merge(arr,low,mid,high);
    return cnt;
}
int inversionCount(vector<int> &arr) {
        int n=arr.size();
        int cnt=mergesort(arr,0,n-1);
        return cnt;
}
int main() {
    // Input array
    vector<int> arr = {3, 4, 9, 6, 2, 2, 5};        //{5,4,3,2,1}
    int cnt=inversionCount(arr);

    cout << cnt << endl;

    return 0;
}
