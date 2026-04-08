#include<bits/stdc++.h>
using namespace std;
int max_profit(vector<int> &prices){
    int n=prices.size();
    // int profit=0;
    //     for(int i=0;i<n;i++){
    //         for(int j=i+1;j<n;j++){
    //             profit=max(profit,prices[j]-prices[i]);
    //         }
    //     }
    //     return profit;
    int profit=0;
    int i=0;
    int buy=prices[0];
    while(i<n){

        if(prices[i]<buy){
            buy=prices[i];
        }
        else{
            profit = max(profit,prices[i]-buy);
        }
        i++;
    }
    return profit;
}
int main(){
    vector<int> prices={38,10,12,11,9,15};
    cout << max_profit(prices);
}