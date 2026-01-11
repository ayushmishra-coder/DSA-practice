#include<bits/stdc++.h>
using namespace std;
void explainDeque(){
    deque<char> dq ;
    dq.push_front('y');
    dq.emplace_front('a');
    dq.push_back('u');
    dq.emplace_back('s');
    // write dq. and some functions will mpop and as u go doen using page down u realise similar functions to list and they are actually similatr to lit,e.g.,
    
    dq.insert(dq.end(),{'h'});
    dq.insert(++dq.begin(),{'A'});
    for(char x:dq){
        cout << x ;
    }
    cout << endl;
}
int main(){
    explainDeque();
}