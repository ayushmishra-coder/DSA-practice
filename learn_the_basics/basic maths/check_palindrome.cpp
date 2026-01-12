#include<bits/stdc++.h>
using namespace std;
int reverse_num(int n){
    int sum=0,remainder;//n=123
    while(n!=0){
        remainder=n%10;//3//2
        n=n/10;//12//1
        sum=sum*10+remainder;//32
    }
    return sum;
}
void check_palindrome(int n){
    if(n<0||n%10==0){
        cout << "not palindrome";
    }
    else{
        if(reverse_num(n)==n){
            cout << "palindrome";
        }
        else{
            cout << "not palindrome";
        }
    }
}
int main(){
    int N;
    cin >> N;
    check_palindrome(N);
}