#include<bits/stdc++.h>
using namespace std;
class solution{
public:
    bool isPalindrome(string s){
        int a='a';int b='z';int c='A';int d='Z'; int x=a-c;
        vector<char> v;        
        for(char el:s){
            if(((int)el>=c && (int)el<=d) || ((int)el>=48 && (int)el<=57)) {
                int element=(int)el+x;
                v.push_back((char)element);
            }
            else if(((int)el>=a && (int)el<=b) || ((int)el>=48 && (int)el<=57)){
                v.push_back(el);              
            }
        } 
        vector<char> V(v);
        reverse(v.begin(),v.end());
        if(V==v){
            return true;
        }
        else return false;
    }
};
int main(){
    string str;
    cin >> str;
    solution obj;
    cout << boolalpha << obj.isPalindrome(str);
}