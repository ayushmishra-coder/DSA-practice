#include<bits/stdc++.h>
using namespace std;
void explainList(){
    list<int> ls;
    ls.push_back(9); // {9}
    for(auto it : ls){
        cout << it << " " ;
    }
    cout << endl;
    ls.emplace_back(10); // {9,10}
    for(auto it : ls){
        cout << it << " " ;
    }
    cout << endl;
    
    ls.push_front(20);   //{20,9,10}
    for(auto it : ls){
        cout << it << " " ;
    }
    cout << endl;

    ls.emplace_front(30); //{30,20,9,10}
    
    //rest same functions and iterator use as vector like clear(),size()
    //can see all the function by writing ls. and seeing all suggestions in vs code and using  up down key on board u can see what function does what and match/verify from codes below
    for(auto it : ls){
        cout << it << " " ;
    }
    cout << endl;
    ls.assign({12,13}); // ls is assigned {12,13},i.e, ls={12,13} now.
    for(auto it : ls){
        cout << it << " " ;
    }
    cout << endl << ls.empty() << endl; //returns 0;as ls is not empty;
    cout << ls.front() << endl;
    cout << *(ls.begin()) << endl;
    cout << *(--ls.end()) << endl;
    cout << ls.back() << endl;

    //merge() merges two sorted already defined lists and gives sorted merged list as result. 
    
    ls.pop_back(); //pops/removes last element;ls becomes {}
    ls.pop_front();//pops 1st; ls becomes {}
    cout << ls.empty() << endl;
    ls.assign({1,2,34,54,23,23,23});

    ls.remove(23) ;
    for(int x: ls){
        cout << x << " ";
    }
    cout << endl;
    ls.splice(ls.begin(),{12,13,13,14,13,2,2,2});
    for(int x : ls){
        cout << x << " ";
    }
    cout << endl;
    ls.unique();
    for(int x : ls){
        cout << x << " ";
    }
    cout << endl;

    ls.sort() ;
    for(int x : ls){
        cout << x << " ";
    }
    cout << endl;

}
int main(){
    explainList();
}