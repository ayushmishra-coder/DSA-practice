#include<bits/stdc++.h>
using namespace std;
void sortNums(vector<int> &nums){
    /*
    int n=nums.size();
        int r=count(nums.begin(),nums.end(),0),w=count(nums.begin(),nums.end(),1);
        for(int i=0;i<r;i++){
            nums[i]=0;
        }
        for(int i=r;i<r+w;i++){
            nums[i]=1;
        }
        for(int i=r+w;i<n;i++){
            nums[i]=2;
        }
        for(int el:nums){
            cout << el << " ";
        }
    */
    int n=nums.size();
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(nums[mid]==2){
            swap(nums[mid],nums[high]);
            high--;
        }
        else if(nums[mid]==1){
            mid++;
        }
        else{
            swap(nums[mid],nums[low]);
            low++;
            mid++;
        }
    }
    for(int el:nums){
        cout << el << " ";
    }
}
int main(){
    vector<int> nums={0,2,0,1,2,1};
    sortNums(nums);
}