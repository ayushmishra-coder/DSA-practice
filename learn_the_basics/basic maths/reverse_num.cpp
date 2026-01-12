//Problem Statement: Given an integer N return the reverse of the given number.

//Note: If a number has trailing zeros, then its reverse will not include them. For e.g , reverse of 10400 will be 401 instead of 00401.
#include<bits/stdc++.h>
using namespace std;
long long int reverse_num(int n){
    long long int sum=0;int remainder;//n=123
    while(n!=0){
        remainder=n%10;//3//2
        n=n/10;//12//1
        sum=(long int)(sum*10+remainder);//32
    }
    return sum;
}
int main(){
    int N;
    cin >> N;
    cout << reverse_num(N);
}