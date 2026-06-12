#include <bits/stdc++.h>
using namespace std;
//ALTHOUGH 'STRUCT' IS FINE U CANT DO OPERATION THAT U CAN WITH 'CLASS' WHILE REST FUNCTIONS BEING SAME.
//SO WE REPLACE STRUCT-->CLASS 
//HEREAFTER WE USE 'CLASS' ONLY.
class Node{
    public:
        int data;
        Node* next;
    public:
        Node(int data1,Node* next1){
            data=data1;
            next=next1;
        }
    public:
        Node(int data1){// u dont have to specify nullpointer now it by default does that everytime. until u specify the next ptr to be otherwiseotherwise.
            data=data1;
            next=nullptr;
        }
    //we can write many constructors within struct/class.
};
int main(){
    vector<int> nums = {1,2,3,4};
    Node* y= new Node(nums[0]);
    cout << y;
}