#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    int removeDublicates(vector<int> &nums){
        int n=nums.size();
        int j=0;
        int k=1;
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[j]){
                nums[k]=nums[i];
                j++;
                k++;
            }
        }
        return (j+1); 
    }
};
int main(){
    vector<int> nums={0,0,1,1,1,2,2,3,3,3,4};
    solution sol;
    int k=sol.removeDublicates(nums);
    cout << k;//return k=3
    cout << endl;
    for(int i=0;i<k;i++){
        cout << nums[i] << " ";
    }
}