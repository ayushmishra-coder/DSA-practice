#include<bits/stdc++.h>
using namespace std;
void nextPermutation(vector<int>& nums) {
    int n = nums.size();
        int a = 0, b;
        int changable = 0;
        for (int i = n - 1; i > 0; i--) {
            if (nums[i] > nums[i - 1]) {
                a = i;
                b = i - 1;
                changable = 1;
                break;
            }
        }
        int x = a;
        if (changable) {
            int temp = nums[a] ;
            for (int j = a + 1; j < n; j++) {
                if (nums[j] < temp && nums[j] > nums[b]) {
                    x = j;
                    temp=nums[j];
                }
            }
            swap(nums[b], nums[x]);
        }
        int j=n-1;
        while(a<j){
            swap(nums[a],nums[j]);
            a++;j--;
        }
        for(int el: nums){
            cout << el << " ";
        }
}
int main(){

    vector<int> nums={5,4,7,5,3,2};//{1,5,4,5,2,3,2}//2,2,7,5,4,3,2,2,1
    nextPermutation(nums);

}
