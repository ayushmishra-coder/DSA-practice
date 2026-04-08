#include<bits/stdc++.h>
using namespace std;

long long maxProduct(vector<int>& nums) {
    int n = nums.size();
    int low=0,high=0;
    long long int product=1;
    long long temp=1;
    long long max_product = LLONG_MIN;
    for(int i=0;i<n;i++){
        product=product*nums[i];
        if(product==0){
        max_product=max(max_product,product);
            product=1;
            continue;
        }
        else if(product<0){
            temp=temp*product;
            max_product=max(max_product,temp);
            product=1;
            continue;
        }
        max_product=max(max_product,product);
    }
    return max_product;
}
int main(){
    vector<int> nums = {2, 3, -2, 3, 1, 4,-2,4,5,6,0,-1,5,9,-1,8,7};//{-2,-1,-3};//{3,-1,4};//{-2,0,-1};
    long long x = maxProduct(nums);  
    cout << x;
}