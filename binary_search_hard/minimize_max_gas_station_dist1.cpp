#include <bits/stdc++.h>
using namespace std;
double minimiseMaxDistance(vector<int> &arr, int k){
	// Write your code here.
		int n=arr.size();
		vector<long int> how_many(n-1,0);
		for(int i=1;i<=k;i++){
			double max_dist=(double)0,max_index=(double)0;
			for(int j=0;j<n-1;j++){
				long int old_dist=arr[j+1]-arr[j];
				double new_dist=old_dist/(double)(how_many[j]+1);
				if(new_dist>max_dist){
					max_dist=new_dist;
					max_index=j;
				}
			}
			how_many[max_index]++;
		}
		double minimiseMaxDist=(double)0;
		for(int j=0;j<n-1;j++){
			long int old_dist=arr[j+1]-arr[j];
			double new_dist=old_dist/(double)(how_many[j]+1);
			if(new_dist>minimiseMaxDist){
				minimiseMaxDist=new_dist;
			}
		}
	return minimiseMaxDist;	
}
int main(){
    vector<int> arr = {1,13,17,23};
    int k = 5;
    cout << minimiseMaxDistance(arr,k);
}