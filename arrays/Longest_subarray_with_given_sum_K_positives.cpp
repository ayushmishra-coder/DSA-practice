#include<bits/stdc++.h>
using namespace std;
int longestSubarray(vector<int> &nums, int k){  
    //subarray is contiguos from one index to another < than size
    int n=nums.size();
    int temp=0;
    for(int i=0;i<n;i++){
        int sum=nums[i];
        int length=1;
        if(nums[i]==k){
            temp=1;
        }
            for(int j=i+1;j<n;j++){
                sum+=nums[j];
                length++;
                if(sum==k){
                    temp=max(length,temp);
                }
            }
    }
    return temp;
}
int main(){
    vector<int> nums={10, -10, 20, 30};
    int k=5;
    cout << longestSubarray(nums,k);
}