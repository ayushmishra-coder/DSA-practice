#include <bits/stdc++.h>
using namespace std;
double minimiseMaxDistance(vector<int> &arr, int k){
	// Write your code here.
		int n=arr.size();
		double low=(double)0;
        double high=(double)0;
        for(int i=0;i<n-1;i++){
            high=max(high,(double)arr[i+1]-arr[i]);
        }
        double diff=1e-6;
        while(high-low>diff){
            double mid=low+(high-low)/2;
            int cnt_stations=0;
            for(int i=0;i<n-1;i++){
                int a=(int)((arr[i+1]-arr[i])/mid);
                if(cnt_stations>k){
                    break;
                }
                else if(a*mid==arr[i+1]-arr[i]){
                    cnt_stations+=a-1;
                }
                else{
                    cnt_stations+=a;
                }
            }
            if(cnt_stations>k){
                low=mid;
            }
            else{
                high=mid;
            }
        }
        return high;
}
int main(){
    vector<int> arr = {1,13,17,23};
    int k = 5;
    cout << minimiseMaxDistance(arr,k);
}