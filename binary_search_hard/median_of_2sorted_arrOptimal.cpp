#include <bits/stdc++.h>
using namespace std;
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2){
    int m=nums1.size(),n=nums2.size();
    if(m>n) return findMedianSortedArrays(nums2,nums1);
    int size=m+n;
    int nums_on_left=(n+m+1)/2;//if n+m is odd say 11 it splits in 6 on left and 5 on right and if its 12 splits into 6 and 6 anyway. 
    int low=0,high=m;
    while(low<=high){
        int mid1=low+(high-low)/2;//this we try to take from arr1
        int mid2=nums_on_left-mid1;//this from arr2
        int l1=INT_MIN,l2=INT_MIN;
        int r1=INT_MAX,r2=INT_MAX;
        if(mid1-1>=0) l1=nums1[mid1-1];
        if(mid2-1>=0) l2=nums2[mid2-1];
        if(mid1<m)    r1=nums1[mid1];
        if(mid2<n)    r2=nums2[mid2];
        if(l1<=r2 && l2<=r1){
            if(size%2==0) return (double)(max(l1,l2)+min(r1,r2))/2.0;
            else return max(l1,l2);
        }
        else if(l1>r2){
            high=mid1-1;
        }
        else if(l2>r1){
            low=mid1+1;
        }
    }
    return 0;
}
int main(){
    vector<int> arr1={1,3,8,9,10},arr2={2,4,5,6,7,11};
    cout << findMedianSortedArrays(arr1,arr2);
}