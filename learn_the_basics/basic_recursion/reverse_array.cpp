#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    vector<int> reverse_array(vector<int>& arr){
    //     int n=arr.size();
    //     vector<int> ans(n);
    //     for(int i=0;i<n;i++){
    //         ans[i]=arr[n-i-1];
    //     }
    //     return ans;
    //or BEST APPROACH:
        int n=arr.size();
        int p1=0,p2=n-1;
        while(p1<p2){
            swap(arr[p1],arr[p2]);
            p1++;
            p2--;
        }
        return arr;
    }
    //OR//
     //      reverse(arr.begin(),arr.end());
    //       return arr;
};
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    solution object;
    //vector<int> v=object.reverse_array(arr);// needed for 1st approach only
    object.reverse_array(arr);
    for(int x:arr){                  //int x:v// needed for 1st approach 
        cout << x << " ";
    }
}