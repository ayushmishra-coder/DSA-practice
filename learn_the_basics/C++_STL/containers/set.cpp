#include<bits/stdc++.h>
using namespace std;
void explainSet(){
    //set stores not only sorted but also unique elements
    set<int> s;
    s.insert({5,8,8,8,12,9}); //{5,8,9,12}
    s.insert(6);              //{5,6,8,9,12}
    s.emplace(18);            //{5,6,8,9,12,18}
    //functionality of insert same as in vector

    auto it=s.find(8) ;//returns iterator pointing to 8
    auto it=s.find(9) ;//returns iterator pointing to 9
    auto it=s.find(3) ;//returns iterator pointing to same as s.end(),i.e,iterator after last element's iterator 
    auto it =s.find(100) ;//returns iterator pointing to same as s.end()

    int cnt=s.count(8)  ;//if the element is in the set then will return 1 else 0
    //NOTE the time complexity difference in two differenr case of usage of erase
    s.erase(8);        //O(logn)
    auto it=s.find(9) ;
    s.erase(it);       //O(1)
    // {1,2,3,4,5}
    auto it1=s.find(3);
    auto it2=s.find(5);
    s.erase(it1,it2); //erases 3,4 (not 5)
}  