#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
    //      int i = 0, temp = 0;

    // for (int el : nums) {
    //     if (el == 1) {
    //         i++;
    //     } else {
    //         temp = max(temp, i);
    //         i = 0;
    //     }
    // }

    // // handle case where array ends with 1s
    // temp = max(temp, i);

    // return temp;
        nums.push_back(0);
        int i=0,temp=0;
        for(int el:nums){
            if(el==1){
                i++;
            }
            else{
                if(temp<i){
                    temp=i;
                }
                i=0;
            }
        }
        return temp;
    }
};
int main(){
    vector<int> nums={1,0,1,1,1,0,1,1,0,1,1,1,1};
    Solution sol;
    cout << sol.findMaxConsecutiveOnes(nums);
}