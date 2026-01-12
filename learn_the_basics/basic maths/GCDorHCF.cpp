#include<bits/stdc++.h>
using namespace std;
 
int hcf(int x,int y){
    
    
    while(y!=0){
        int remainder=x%y;
        x=y;
        y=remainder;
    }
    return x;
}
int main(){
    int x,y;
    cout << "input:";
    cin >> x >> y;
    cout << hcf(x,y);
}