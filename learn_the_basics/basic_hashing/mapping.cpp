#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    //pre calculation
    unordered_map<int,int> hash;//unordered takes O(n) in best and avg cases and in very very rare worst cases it takes O(n) while map takes O(log n) in all cases and hence we often uses unordered except ver few rare cases 
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }                           
    int q;
    cin >> q;
    while(q--){
        int num;
        cin >> num;
        //fething
        cout << num << "->" << hash[num] << endl;
    }
}