#include <bits/stdc++.h>
using namespace std;
int merge(vector<int>& nums,int low,int mid,int high){
    int cnt=0;vector<int> temp;
    int left=low,right=mid+1;
    int a=low,b=mid,c=mid+1,d=high;
    while(c<=d && a<=b){
        if((long long int)nums[a]>(long long int)2*nums[c]){
            cnt+=high-c+1;
            a++;
        }
        else{
            c++;
        }
    }
    while(left<=mid && right<=high){        
        if(nums[left]>nums[right]){
            temp.push_back(nums[left]);
            left++;
        }
        else{
            temp.push_back(nums[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(nums[left]);
            left++;
    }
    while(right<=high){
        temp.push_back(nums[right]);
            right++;
    }
    for(int i=low;i<=high;i++){
        nums[i]=temp[i-low];
    }
    return cnt;
}
int mergesort(vector<int> &nums,int low,int high){
    int cnt=0;
    if(low>=high){
        return cnt;
    }
    int mid=low+(high-low)/2;
    cnt+=mergesort(nums,low,mid);
    cnt+=mergesort(nums,mid+1,high);
    cnt+=merge(nums,low,mid,high);
    return cnt;
}
int reversePairs(vector<int>& nums) {
    int n=nums.size();
    int low=0,high=n-1;
    int cnt= mergesort(nums,low,high);   
    return cnt; 
}
int main() {
    // Input array
    vector<int> arr = {1,3,2,3,1,0};
    int cnt=reversePairs(arr);

    cout << cnt << endl;
    for(auto el:arr){
        cout << el << " ";
    }
    return 0;
}