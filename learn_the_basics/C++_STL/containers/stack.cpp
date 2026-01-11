#include<bits/stdc++.h>
using namespace std ;
void explainStack(){
    stack<int> st;
    //works on concept of stacking objects say platesor smthng
    // works on LIFO,i.e,last in(put) first out(put) //entering elemnts is like putting elemnts in a vertical box one over other as we add/push/emplace elemnts
    st.push(1) ;   //{1}
    st.push(2);    //{2,1}
    st.push(3) ;   //{3,2,1}
    st.push(4) ;   //{4,3,2,1}
    st.emplace(5); //{5,4,3,2,1}

    cout << st.top();
    cout << endl;
    st.pop() ;//{4,3,2,1} //pops last element but last element is at top,.i.e,on leftmost,i.e,5 so 5 gets popped 
    cout << st.top();
    cout << endl;
    cout << st.size() << endl;
    cout << boolalpha << st.empty() << endl ;
    stack<int> st1;
    st1.emplace(6);
    st1.emplace(7);
    st1.emplace(8);
    st.swap(st1); //st={8,7,6}
    
    while(!st.empty()){
    cout << st.top();
    cout << " ";
    st.pop();}
}
int main(){
    explainStack();
}