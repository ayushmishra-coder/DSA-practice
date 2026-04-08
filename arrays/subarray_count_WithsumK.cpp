#include<bits/stdc++.h>
using namespace std;
int subarraySum(vector<int>& nums, int k) {
    int n=nums.size();
    unordered_map<int,int> hmp;
    int x=0;int count=0;
    hmp[0]=1;
    int psum=0;
    for(int i=0;i<n;i++){
        x=nums[i];
        psum+=x;
        if(hmp.find(psum-k)!=hmp.end()){
            count+=hmp[psum-k];
        }
        hmp[psum]++;
    }
    return count;
}
int main(){
    // int n;
    // cin >> n;
    vector<int> nums={1,1,2,1,-1,-1,1,3,6,-3};
    // for(int i=0;i<n;i++){
    //     cin >> nums[i];
    // }
    int k=3;
    // cin >> k;
    cout << endl << subarraySum(nums,k);
    
}