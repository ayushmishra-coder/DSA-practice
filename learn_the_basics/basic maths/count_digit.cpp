//Problem Statement: Given an integer N, return the number of digits in N.
#include<bits/stdc++.h>
using namespace std;
int count_digit(int n){
    int count=1;
    while(n!=0){
        n=n/10;
        count++;
    }
    //count=(int)(log10(n)+1)  //alter
    return count;
}
int main(){
    int N;
    cin >> N;
    cout << count_digit(N);
} 