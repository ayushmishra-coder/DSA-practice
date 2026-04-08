#include<bits/stdc++.h>
using namespace std;
int largest_subarray_sum(vector<int> &nums){
    /*int n=nums.size();
    int mx=nums[0];
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=nums[j];
            mx=max(sum,mx);
        }
    }
    return mx;*/ //O(n*n) should make O(n);
    int n=nums.size();
    int sum=0;int el;int mx=nums[0];int k=-1;
    for(int i=0;i<n;i++){
        el=nums[k];
        sum=sum+nums[i];
        mx=max(sum,el,mx);
        k++;
    }
}
int main(){
    vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};
    cout << largest_subarray_sum(nums);
}