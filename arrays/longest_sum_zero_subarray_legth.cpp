#include<bits/stdc++.h>
using namespace std;
int longestSubarray(vector<int> &nums){  
    //subarray is contiguos from one index to another < than size
    int n=nums.size();
    unordered_map<int,int> hmp;
    int sum=0,maxlen=0;
    for(int i=0;i<n;i++){
        sum+=nums[i];
        if(sum==0){
            maxlen=i+1;
        }
        else if(hmp.find(sum)!=hmp.end()){
            maxlen=max(maxlen,i-hmp[sum]);
        }
        else{
            hmp[sum]=i;
        }
    }
    return maxlen;
}
int main(){
    vector<int> nums={6, -2, 2, -8, 1, 7, 4, -10};
    cout << longestSubarray(nums);
}