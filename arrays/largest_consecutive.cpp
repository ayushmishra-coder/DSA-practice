#include<bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0){return 0;}
        set<int> s(nums.begin(),nums.end());//0,1,3,4,12,18,97-101
        
        int length=0,mx=1,temp=*s.begin()-1;
        for(int el:s){
            if(el==temp+1){
                length++;
                mx=max(length,mx);
            }
            else{
                length=1;
            }
            temp=el;
        }
        return mx;
}
int main(){
    vector<int> nums={1,0,1,2,101,99,99,98,97,98,100,4,12,18};//ams=5 as {101,102,103,104,105} is largest consecutiive arr of legnth 5.
    int maxim=longestConsecutive(nums);
    cout << maxim ;
}