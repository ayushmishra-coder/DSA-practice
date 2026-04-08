#include <bits/stdc++.h>
using namespace std;
vector<int> majorityElement(vector<int> &nums)
{
    int n = nums.size();
    vector<int> res;
    int cnt1=0,cnt2=0,el1=INT_MIN,el2=INT_MIN;
    for(int i=0;i<n;i++){
        //so we find 1st el and put it in el1 as posiible majority candidate//we may return to it only after el2 is declared..
        if(cnt1==0 && nums[i]!=el2){
            cnt1=1;
            el1=nums[i];
        }
        //as soon as we find 2nd el this will be executed since 1st can no more be executed until this one executes so if there are 2 no.s or more it immmediately stores the other el than el1
        else if(cnt2==0 && nums[i]!=el1){
            cnt2=1;
            el2=nums[i];
        }
        // el1 is put as long as it keeps appearing this increases cnt1.once we find el2 we may go below now.
        else if(nums[i]==el1){
            cnt1++;
        }
        //it does what u think it does.
        else if(nums[i]==el2){
            cnt2++;
        }
        //it does what you think it does.//it also is done only after we put el2 as also told earlier
        else{
            cnt1--;
            cnt2--;
        }
    }
    //now in el only POSSIBLE majority el survives not THE majority el so we crosss check once.also cnt is irrelevant it was just too to get possible majority candidate.
    int cnt1=0,cnt2=0;
    for(int i=0;i<n;i++){
        if(nums[i]==el1){
            cnt1++;
        }
        else if(nums[i]==el2){
            cnt2++;
        }
    }
    if(cnt1>n/3){res.push_back(el1);}
    if(cnt2>n/3){res.push_back(el2);}
    return res;
}
int main()
{
    vector<int> nums = {2, 2, 4, 2, 2, 3, 4, 3, 3, 3, 4}; //{1,2}
    for (auto el : majorityElement(nums))
    {
        cout << el << " ";
    }
}