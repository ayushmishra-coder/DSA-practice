#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i]+nums[j]==target){
        //             return {i,j};
        //         }
        //     }
        // }
        // return {};
        // TWO POINTER APPROACH ->(nlogn) and O(1):
        // int n=nums.size();
        // sort(nums.begin(),nums.end());
        // int left=0,right=n-1;
        // while(left<right){
        //     int sum=nums[left]+nums[right];
        //     if(sum==target){
        //         return{left,right};
        //     }
        //     else if(sum<target){
        //         left++;
        //     }
        //     else{
        //         right++;
        //     }
        // }
        // return {};
        //O(n) and O(n);
        int n = nums.size();
        unordered_map<int, int> mp;  
        for (int i = 0; i < n; i++) {
            int complement = target - nums[i];
            
            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }
            
            mp[nums[i]] = i;
        }
        return {};  
    }
};
int main(){
    vector<int> nums={4,3,1,2,5};//{1,3,4,5,6}
    int target=8;
    Solution sol;
    vector<int> arr=sol.twoSum(nums,target);
    for(int el:arr){
        cout << el << " ";
    }
}
