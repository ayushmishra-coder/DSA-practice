#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    //{10,5,10,15,10,5}
    unordered_map<int,int> hash;
    //pre calculation
    for(int i=0;i<N;i++){
        hash[arr[i]]++;
    }  
    //{{10,3},{15,1},{5,2}}
    int n=hash.size();
    int freq[n];
    int i=0;
    for(auto el:hash){
        freq[i]=el.second;
        i++;
    }
    sort(freq,freq+n);
    for(auto el:hash){
        if(hash[el.first]==freq[n-1]){ cout << "max=" << el.first << endl; break;}
    }
    for(auto el:hash){
        if(hash[el.first]==freq[0]){ cout << "min=" << el.first << endl; break;}
        
    }
}