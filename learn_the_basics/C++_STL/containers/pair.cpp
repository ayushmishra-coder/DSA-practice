#include<bits/stdc++.h>
using namespace std;
void explainPair(){
    //to store a pair of integers,doubles,chars we use pair as below
    pair<int,int> p={2,3} ;
    cout << p.first << " " << p.second  << endl ;

    //to store more than 2 ints,floats,chars,we use nested pair as below
    pair<int,pair<int,int>> q={2,{3,4}} ;

    cout << q.first << " " << q.second.first << " " << q.second.second << endl ;

    //like int arr[] contains integers at indexes 0,1,2,3... similarily following contains pairs. 
    pair<int,int> arr[]={{2,3},{5,7},{9,15},{56,98}};
    cout << arr[2].first << " " << arr[2].second; 
     
}
int main(){
    explainPair();
}