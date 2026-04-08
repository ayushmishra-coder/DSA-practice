#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int j=m-1,k=n-1;
    for(int i=m+n-1;i>=0;i--){
        if(k<0){break;}
        else if (j < 0) {
            nums1[i] = nums2[k];
            k--;
        }
        else if(nums2[k]>=nums1[j]){
            nums1[i]=nums2[k];k--;
        }
        else if(nums2[k]<nums1[j]){
            nums1[i]=nums1[j];j--;
        }
    }
}
int main(){
    int m=3;
    vector<int> nums1={1,2,3,0,0,0,0,0};//since the merge is to be done in nums1 we take it of m+n size with after m index it has zero they dont matter
    int n=5;
    vector<int> nums2={0,1,3,5,6};
    merge(nums1, m, nums2, n);
    for(int el:nums1){
        cout << el << " ";
    }
}