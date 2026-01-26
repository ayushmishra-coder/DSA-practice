#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    // since ascii value <=256 always use hash array for frquency of char in string
    int hash[256]={0};

    //pre calculation
    for(int i=0;i<(int)str.size();i++){
        hash[(int)str[i]]++;//str at index i is typecasted to int by default and program runs even after showing error(typecasted just to remove that error for smoothness)
    }

    int q;
    cin >> q;
    while(q--){
        char c;
        cin >> c;

        //fetching
        cout << hash[(int)c] << endl;

    }
    return 0;
    
}