#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void reverseArr(vector<int>& arr,int start,int end){
        while(start<end){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
    }
    void rotate(vector<int>& nums, int k,string direction) {
        int n=nums.size();
        k=k%n;
        if(direction=="right"){
            reverseArr(nums,0,n-1);
            reverseArr(nums,0,k-1);
            reverseArr(nums,k,n-1);
        }
        else if(direction=="left"){
            reverseArr(nums,0,n-1);
            reverseArr(nums,0,k);
            reverseArr(nums,k+1,n-1);
        }
        for(auto el:nums){
            cout << el << " ";
        }
    }
};
int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }
    int k;
    cin >> k;
    string direction;
    cin >> direction; 
    Solution sol;
    sol.rotate(nums,k,direction);
}










// for(int i=0;i<k;i++){
//     int temp=nums[n-1];
//     for(int j=n-1;j>0;j--){
//         nums[j]=nums[j-1];
//     }
//     nums[0]=temp;
// }
// for(int el:nums){
//     cout << el << " ";
// }





