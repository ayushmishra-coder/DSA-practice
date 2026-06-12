#include <bits/stdc++.h>
using namespace std;
double minimiseMaxDistance(vector<int> &arr, int k){
	// Write your code here.
		int n=arr.size();
        vector<int> how_many(n-1,0);
		priority_queue<pair<double,int>> pq;
        for(int i=0;i<n-1;i++){
            double dist=(double)(arr[i+1]-arr[i]);
            int ind=i;
            pq.push({dist,ind});
        }
        for(int i=1;i<=k;i++){
            int max_index=pq.top().second;
            long int original_dist=arr[max_index+1]-arr[max_index];
            how_many[max_index]++;
            pq.pop();
            pq.push({original_dist/(double)(how_many[max_index]+1),max_index});
        }
        return pq.top().first;
}
int main(){
    vector<int> arr = {1,13,17,23};
    int k = 5;
    cout << minimiseMaxDistance(arr,k);
}