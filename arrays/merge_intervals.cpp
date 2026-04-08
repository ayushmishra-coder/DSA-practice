#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> merge(vector<vector<int>>& intervals) {
    int n=intervals.size();
    sort(intervals.begin(),intervals.end());
    vector<vector<int>> ans;
    for(auto el:intervals){
        if(ans.empty()|| ans.back()[1]<el[0]){
            ans.push_back(el);
        }
        else{
            ans.back()[1]=max(ans.back()[1],el[1]);        
        }
    }
    return ans;
}
int main(){
    vector<vector<int>> intervals = {{1,4},{2,3},{4,7},{8,10},{10,12},{15,18},{20,25}};//[[4,7],[1,4]]//[[1,4],[4,5]]
    vector<vector<int>> x=merge(intervals);
    for(auto el:x){
        for(int x:el){
            cout << x << " ";
        }
        cout << endl;
    }
}
















