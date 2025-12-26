#include<bits/stdc++.h>
using namespace std;
int largerNum(int num1,int num2){
    if(num1>=num2){
        return num1;
    }
    else{
        return num2;
    }       //without this block, if num1<num2 the function wont find smthng to return but it should as it is non-void function and hence error!
}
int main(){
    int num1,num2;
    cin >> num1 >> num2 ;
    cout << largerNum(num1,num2);
}
