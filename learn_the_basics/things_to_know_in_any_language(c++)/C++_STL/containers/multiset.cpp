#include<bits/stdc++.h>
using namespace std;
void explainMultiset(){
    //multiset is set without restrictiction of having unique element,i.e,it can have same element more than once
    multiset<int> ms;
    ms.emplace(1);
    ms.emplace(1);
    ms.emplace(1);
    ms.insert({8,4,5,8});//ms={1,1,1,4,5,8,8}
    
    //NOTE:
    ms.erase(1)  ;          //erases all 1//{4,5,8,8}
    ms.erase(ms.find(1));   // erases only one 1,i.e,erases only iterator pointing to 1st 1.
    //rest functions same as set.
}