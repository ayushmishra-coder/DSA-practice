#include<bits/stdc++.h>
using namespace std;
vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> v(n);
        int l=0,m=1;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                v[l]=nums[i];
                l=l+2;
            }
            else{
                v[m]=nums[i];
                m=m+2;
            }
        }
        return v; 
    }
int main(){
    vector<int> nums={3,1,-2,-5,2,-4};
    vector<int> num=rearrangeArray(nums);
    for(int el:num){
        cout << el << " ";
    }
}