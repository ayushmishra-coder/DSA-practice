#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int j=0,k=n-1;
        
        for(int el:nums){
            cout << el << " ";
        }
    }
};
int main(){
    vector<int> nums={2,0,2,1,1,0};
    Solution sol;
    sol.sortColors(nums);
}