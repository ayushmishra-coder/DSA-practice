#include<bits/stdc++.h>
using namespace std;
void explainQueue(){
    queue<int> q;
    //works on concept of Queue like 1st comer gets ticket and get out 1st and then 2nd,3rd,4th one in queue;
    //FIFO->First In First Out
    q.push(1) ;  //{1}
    q.push(2);  //{1,2}
    q.push(3);  //{1,2,3}
    q.push(4);  //{1,2,3,4}
    q.emplace(5);//{1,2,3,4,5}
    cout << q.front() << endl;  //1
    cout << q.back() << endl;   //5

    q.back() += 5; // 5 added to last element's value
    cout << q.back() << endl;

    //rest same as stack;diff:i)FIFO ii)here both front and back accesible but in stack only top
    while(!q.empty()){
        cout << q.front() << " ";  
        q.pop();  // pops 1st element
    }
}
int main(){
    explainQueue();
}