#include<bits/stdc++.h>
using namespace std;
void explainPriority_queue(){
// MAX HEAP
    //sililar to Queue but adds/pushes element in sorted manner automatically.
    priority_queue<int> pq;
    // above syntax for :largest value always at top;
    pq.push(25)    ;//{25}
    pq.emplace(30) ;//{30,25}
    pq.push(28)    ;//{30,28,25}
    pq.push(10)    ;//{30,28,25,10}
    pq.push(29)    ;//{30,29,28,25,10}
    cout << pq.top();
    cout << endl;
    //pq.pop();  //pops 1st element/top element //{29,28,25,10}
    //cout << pq.top();
    
    //cout << endl;
    cout << "{" ;
    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << "}" << endl;

// MIN HEAP
    //syntax for smallest at top(increasing element's value)
    priority_queue<int,vector<int>,greater<int>> PQ;
    PQ.push(25)    ;//{25}
    PQ.emplace(30) ;//{25,30}
    PQ.push(28)    ;//{25,28,30}
    PQ.push(10)    ;//{10,25,28,30}
    PQ.push(29)    ;//{10.25,28,29,30}
    cout << PQ.top();
    cout << endl;
    cout << "{" ;
    while(!PQ.empty()){
        cout << PQ.top() << " ";
        PQ.pop();            
    }
    cout << "}" << endl;
}
int main(){
    explainPriority_queue();
}
//push and pop's time complexity is O(logn) and that of top() is O(1)