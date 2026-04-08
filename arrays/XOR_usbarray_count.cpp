#include<bits/stdc++.h>
using namespace std;
long subarrayXor(vector<int> &arr, int k) {
    int n=arr.size();
    unordered_map<int,int> freq;
    freq[0]=1;
    long count=0,prefixxor=0;
    for(int i=0;i<n;i++){
        prefixxor^=arr[i];
        int target=prefixxor ^ k;
        if(freq.find(target)!=freq.end()){
            count+=freq[target];            
        }
        freq[prefixxor]++;
    }
    return count;
}
int main(){
    vector<int> arr = {4, 2, 2, 6, 4};int k = 6;//arr={5,6,7,8,9} k=5
    cout << subarrayXor(arr,k);
}