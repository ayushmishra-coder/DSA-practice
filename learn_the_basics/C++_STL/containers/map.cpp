#include<bits/stdc++.h>
using namespace std;
void explainMap(){
    map<int,int> mp;//stores like pair,i.e,like {{a1,b1},{a2,b2},..,{ai,bi}} 
    //NOTE:here ai is key =1,2,3..and is always unique and ordered like set and has a value b1(like roll no.s and name;roll no. are increasing or sorted and unique,names assigned not neccesarily so)
    mp[1] =2;          //{{1,2}}
    mp.emplace(3,4) ;  //{{1,2},{3,4}}
    mp.insert({2,2}) ; //{{1,2},{2,2},{3,4}} //1,2,3 are keys and 2,2,4 are corres. values
    
    map<pair<int,int>,int> mpp;
    mpp[{2,3}]=10;

    //acessing map elements
    for(auto it: mp){
        cout << it.first << " " << endl; 
    }

    cout << mp[1]; //return 2
    cout << mp[5]; //returm 0(since mp[5] aint put yet)

    auto it=mp.find(3);    //returns iterator pointing to elementt with key 3
    cout << (*it).second ; //elemnt with key 3 ka second

    mp.find(5); // mp.find(8) will return same as mp.end()
    //erase upper,lower bound ,size etc same as others
}
void explain_multimap(){
    multimap<int,int> mmp;
    //analogous to multiset //multiple or duplicate key possible but ordered
}
void explain_unordered_map(){
    unordered_map<int,int> ump;
    //analogous to unorded set // unique but unorderd or unsorted keys
    //O(1) very rarely O(n)
}